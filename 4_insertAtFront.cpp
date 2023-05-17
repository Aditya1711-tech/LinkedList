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

/*---- Insert node ad front ----*/
// Here this function not work properly because it will changing head only for it's own scope not globelly
// so new hwad will not be shown to main when function return to main so right code is given below
void pushFront(node *head, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

/*--- Correct way to insert a node at front ----*/
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

int main()
{
    // Dynamically create some nodes
    node *head = NULL;
    head = insertFront(head, 5);
    pushFront(&head, 2); // Here head is passed by its address/refrance we can say
    size(head);
    printLL(head);
    return 0;
}