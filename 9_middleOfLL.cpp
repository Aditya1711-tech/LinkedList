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

void pushFront(node **head_ref, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

int main()
{
    node *head = NULL;
    pushFront(&head, 3);
    pushFront(&head, -3);
    pushFront(&head, 1);
    pushFront(&head, 10);
    pushFront(&head, 6);
    pushFront(&head, 0);

    printLL(head);

    /*--- Finding middle ----*/
    int l = size(head);
    node *curr = head;
    for (int i = 1; i < (l / 2) + 1; i++)
    {
        curr = curr->next;
    }
    cout << curr->data << endl;
    return 0;
}