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

int main()
{
// Pointer to variable
/*
*/
    int x = 20;

    // ----Way1----
    /*
    int *ptr;
    ptr = &x;
    */
    // ---way2------
    int *ptr = &x;

//Concept of pointer to pointer
    int **ptr1 = &ptr;

    cout << ptr << endl;  //Address of x
    cout << *ptr << endl;  //value at address stored in ptr(value of x)
    cout << ptr1 << endl;  //address of ptr
    cout << *ptr1 << endl; //value at address stored in ptr1 (address of x)
    cout << **ptr1 << endl; //value at address stored at ptr(value of x)


// Pointer to array
    int a[] = {1,2,3,4};
    int *ptra = a; //Here we don't write ptra = &a
    // Also cann written as
    int *ptra1 = &a[0];

    cout<<ptra1<<endl<<ptra<<endl; //Both will give same value
    return 0;
}