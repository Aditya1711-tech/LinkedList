#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#define ll long long int
using namespace std;

/*---- Define node -----*/
struct node
{
    int data;
    node *next;
};

/*---- Print Linked list-----*/
void printLL(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/*--- Size of LL ---*/
int size(node *head)
{
    if (head == NULL)
        return 0;
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    cout << "Size of LL is: " << count << endl;
    return count;
}

/*---- Insert node ----*/
// Here this function not work properly because it will changing head only for it's own scope not globelly
// so new hwad will not be shown to main when function return to main so right code is given below
void pushFront(node *head, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

/*--- Correct way to insert a node ----*/
node *insertFront(node *head, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    return head;
}
// Or Other way is that you pass head by refrance
void pushFront(node **head_ref, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

/*---- Find nth node ----*/
node *findNth(node *head, int size, int n)
{
    n -= 1;
    if (n > size)
        return NULL;
    if (n == 1)
        return head;
    node *temp = head;
    while (n--)
    {
        temp = temp->next;
    }
    return temp;
}

/*--- Insert at middle ----*/
void insertAtMiddle(node *prev, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = prev->next;
    prev->next = newNode;
}

/*--- Insert at End ----*/
void insertAtEnd(node *end, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = NULL;
    end->next = newNode;
}

void insertAtEnd2(node **head_ref, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }

    node *last = *head_ref;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    return;
}

/*--- Delete a node with value equal to key ---*/
void deleteNode(node **head_ref, int key)
{
    // initialize prev and curr
    node *prev, *curr;
    curr = *head_ref;

    // if key is present in head itself
    if (curr != NULL && curr->data == key)
    {
        *head_ref = curr->next;
        free(curr);
        return;
    }

    // If key is not in head then traverse through whole ll
    while (curr != NULL && curr->data != key)
    {
        prev = curr;
        curr = curr->next;
    }

    // If we traverse through whole ll and didn't find key then
    if (curr == NULL)
        return;

    // But, if we found the key
    prev->next = curr->next;
    free(curr);
    return;
}

int main()
{
    // Dynamically create some nodes
    node *head = NULL;
    head = insertFront(head, 5);
    head = insertFront(head, -3);
    head = insertFront(head, 4);
    pushFront(&head, 2); // Here head is passed by its address/refrance we can say

    node *prev = head->next->next;
    cout << "Prev:" << prev->data << endl;
    cout << "Before insert at middle: ";
    printLL(head);
    insertAtMiddle(prev, 9);

    int size1 = size(head);

    node *nth = findNth(head, size1, 5);
    cout << "nth: " << nth->data << endl;

    cout << "Before insurted at end: ";
    printLL(head);
    insertAtEnd(nth, -1);
    insertAtEnd2(&head, 10);

    cout << "Before deleted: ";
    printLL(head);
    deleteNode(&head, 2);

    size(head);
    printLL(head);
    return 0;
}