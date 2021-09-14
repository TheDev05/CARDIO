// **COPY CONSTRUCTOR**
// **23.02.21

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    data(int X, int Y)
    {
        a = X;
        b = Y;
    }

    data(data &P)
    {

        a = P.a;
        b = P.b;
    }

    void showdata()
    {
        cout
            << "a: " << a
            << " b: " << b << endl;
    }
};

int main()
{
    data obj1(2, 4), obj2(obj1);
    obj1.showdata();
    obj2.showdata();
    return (0);
}