//** CONSTRUCTOR OVERLOADING **

#include <iostream>
using namespace std;

class data
{
private:
    int a, b, c;

public:
    // data(int X, int Y)//? CONSTRUCTOR OVERLOADING
    // {
    //     a = X;
    //     b = Y;
    //     c = 0;
    // }
    // data(int P)
    // {
    //     a = P;
    //     b = 0;
    //     c = 0;
    // }
    // data()
    // {
    //     a = b = c = 0;
    // }

    data(int X=0, int Y = 0, int Z = 0) //? DEFAULT ARGUMENT CONCEPT
    {
        a = X;
        b = Y;
        c = Z;
    }
    void showdata()
    {
        cout << "OUTPUT: " << a + b + c << endl;
    }
};

int main()
{
    data obj1(2, 4), obj2(5), obj;
    obj1.showdata();
    obj2.showdata();
    obj.showdata();
    return (0);
}