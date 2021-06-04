// ** PASSING CLASS OBJECT IN CLASS FUNCTIONS **
// ** 20.03.21

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    void setdata()
    {
        cout << "ENTER TWO NUMBERS:" << endl;
        cin >> a >> b;
    }

    data add(data x, data y)
    {
        data temp;
        temp.a = x.a + y.a;
        temp.b = x.b + y.b;
        return (temp);
    }

    void showdata()
    {
        cout << "NUMBER: " << a << b;
    }
};

int main()
{
    data obj1, obj2, sum;
    obj1.setdata();
    obj2.setdata();

    sum=sum.add(obj1, obj2);
    sum.showdata();
    return (0);
}
