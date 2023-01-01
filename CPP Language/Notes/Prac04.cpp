//** REFRANCE VARIABLES
//** 20.03.21

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &b = a; //? Nothing but a duplicate of a.

    b = b + 1; //? ANY CHANGE LEADS CHANGE IN POINTED VARIABLE.

    cout << "VALUE OF 'A': " << a;
    return (0);
}