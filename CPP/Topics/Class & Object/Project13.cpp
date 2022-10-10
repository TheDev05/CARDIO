//** C++ Program to calculate Volume of Cube using constructor

#include <iostream>
using namespace std;

class data
{
private:
    int a;

public:
    data()
    {
        cout << "ENTER SIDE OF CUBE: " << endl;
        cin >> a;
        cout << endl
             << "VOLEUME OF CUBE IS: " << a * a * a << endl;
    }
};

int main()
{
    data obj1;
    return (0);
}
