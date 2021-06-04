// ** DEFINING MEMBER FUNCTION OUTSIDE CLASS **

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    void setdata(int p, int q)
    {
        a = p;
        b = q;
    }

    data operator+(data);

    void showdata()
    {
        cout << "AFTER SUM: " << a << "," << b << endl;
    }
};

data data::operator+(data X)
{
    data temp;
    temp.a = a + X.a;
    temp.b = b + X.b;
    return (temp);
}

int main()
{
    data obj1, obj2, obj3;
    obj1.setdata(2, 3);
    obj2.setdata(4, 5);
    obj3 = obj1 + obj2;
    // obj3 = obj1.operator+(obj2); both way we can add.
    obj3.showdata();
    return (0);
}