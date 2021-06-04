//** C++ program to add two complex number passing objects as arguments

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    void setdata()
    {
        cout << "ENTER REAL PART THEN IMAGINARY PART OF COMPLEX NUMBER: " << endl;
        cin >> a >> b;
    }
    data operator+(data p)
    {
        data temp;
        temp.a = a + p.a;
        temp.b = b + p.b;
        return (temp);
    }
    void showdata()
    {
        cout << a << " + i" << b << endl;
    }
};

int main()
{
    data obj1, obj2, sum;
    obj1.setdata();
    obj2.setdata();
    // sum = obj1 + obj2;
    sum = obj1.operator+(obj2);

    sum.showdata();
    return (0);
}
