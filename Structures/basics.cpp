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

struct Student
{
    int roll;
    string name;
    int age;

    void showDetails()
    {
        cout << "Roll no is: " << roll << endl;
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
    }
};

struct Teacher
{
    string name;
    int age;
    int salary;
    bool english;
    string gender;

    void showDetails()
    {
        cout << "Name is: " << name << endl;
        cout << "Age is: " << age << endl;
        cout << "Salary is: " << salary << endl;
        cout << "Does know english? " << english << endl;
        cout << "Gender is: " << gender << endl;
    }
};

int main()
{

    Student Aditya;
    Aditya.roll = 1;
    Aditya.name = "Aditya";
    Aditya.age = 21;

    Aditya.showDetails();
    cout << endl;

    Teacher teacher[10];

    // teacher[0] = {"Aditya", 21, 50000, true, "male"};

    for (int i = 0; i < 10; i++)
    {
        teacher[i].name = "Aditya";
        teacher[i].age = 21;
        teacher[i].salary = 50000;
        teacher[i].english = true;
        teacher[i].gender = "male";
    }
    for (int i = 0; i < 10; i++)
    {
        teacher[i].showDetails();
        cout << endl;
    }
    return 0;
}
