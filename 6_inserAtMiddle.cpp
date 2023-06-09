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
    if (n > size)
        return NULL;
    if (n == 1)
        return head;
    n -= 1;
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
    insertAtMiddle(prev, 9);

    int size1 = size(head);

    node *nth = findNth(head, size1, 5);
    cout << "nth: " << nth->data << endl;

    size(head);
    printLL(head);
    return 0;
}