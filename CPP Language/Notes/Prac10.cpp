// ** STATIC MEMEBER **
// ** 20.03.2021

#include <iostream>
using namespace std;

class data
{
private:
    static int a;
    int p, q;

public:
    void setdata()
    {
        cout << "ENTER TWO VALUES:" << endl;
        cin >> p >> q;

        cout << "STATIC DATA:" << endl;
        cin >> a;
    }
    void showdata()
    {
        cout << "SUM: " << p + q << endl
             << "STATIC VALUE:" << a << endl;
    }
};

int data::a;

int main()
{
    data obj1, obj2;

    obj1.setdata();
    obj1.showdata();

    obj2.setdata();
    obj2.showdata();
    return (0);
}
