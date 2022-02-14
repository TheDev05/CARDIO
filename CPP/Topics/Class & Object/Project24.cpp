//**Count the created objects using static member function in C++.

#include <iostream>
using namespace std;

class data
{
private:
    int a;
    static int count;

public:
    data()
    {
        count++;
    }
    void setdata(int x)
    {
        a = x;
    }
    data adddata(data p)
    {
        data temp;
        temp.a = a * a + p.a * p.a;
        return (temp);
    }
    void showdata()
    {
        cout << "SUM AFTER SQUARE OF ATTRIBUTES: " << a << endl;
        cout << "TOTAL OBJECT CREATED IS: " << count;
    }
};

int data::count;

int main()
{
    data obj1, obj2, obj3;
    obj1.setdata(4);
    obj2.setdata(2);

    obj3 = obj1.adddata(obj2);
    obj3.showdata();

    return (0);
}