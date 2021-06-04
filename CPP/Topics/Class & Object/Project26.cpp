//**C++ Program to show Example of Default copy constructor

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    data(int x, int y)
    {
        a = x;
        b = y;
    }

    data(data &p)
    {
        a = p.a;
        b = p.b;
    }

    void showdata()
    {
        cout << "A: " << a << endl
             << "B: " << b << endl;
    }
};

int main()
{
    data obj1(2, 4), obj2(obj1);
    obj2.showdata();
    return (0);
}