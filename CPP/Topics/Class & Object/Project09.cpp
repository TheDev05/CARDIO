//** C++ program to Swap two numbers using class

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void swap(data &p) //! IMPORTANT: IF YOU REMOVE & THEN ONLY PARAMETER COPY IS PASSED BUT NOW ADDRESS IS ACCEPTED
    {
        data temp;
        temp.a = a;
        temp.b = b;

        a = p.a;//? ANY CHnge leads change in a because obj1 is called so address is shared.
        b = p.b;
        p.a = temp.a;
        p.b = temp.b;
    }
    void showdata(data q)
    {
        cout << "obj1: " << a << " " << b << endl
             << "obj2: " << q.a << " " << q.b << endl;
    }
};

int main()
{
    data obj1, obj2;
    obj1.setdata(2, 3);
    obj2.setdata(4, 5);
    obj1.swap(obj2);
    obj1.showdata(obj2);
    return (0);
}