//**C++ Program to Show Overload Constructor Example

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    data(int x = 0, int y = 0) //? default argument
    {
        a = x;
        b = y;
    }

    // data()//? constructor overloaded
    // {
    //     a = 0;
    //     b = 0;
    // }

    void showdata()
    {
        cout << "a: " << a << endl
             << "b: " << b << endl;
    }
};

int main()
{
    data obj1(2, 5), obj2;
    obj1.showdata();
    obj2.showdata();
    return (0);
}
