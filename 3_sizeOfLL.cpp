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

int main()
{
    // Dynamically create some nodes
    node *head = new node();
    node *second = new node();
    node *third = new node();

    // Add data and link each node
    head->data = 5;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 1;
    third->next = NULL;
    size(head);
    printLL(head);
    return 0;
}