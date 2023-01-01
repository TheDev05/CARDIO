//** C++ Program to determine the Area of Rectangle using constructors

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    data()
    {
        cout << "ENTER LENGTH AND BREADTH OF RECTANGLE: " << endl;
        cin >> a >> b;

        cout << "THE AREA OF RECTANGLE IS: " << a * b << endl;
    }
};

int main()
{
    data obj1;
    return (0);
}