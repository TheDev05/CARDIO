//** ACCESING STATIC VARIABLES WITHOUT OBJECT
//** STATIC FUNCTION CONCEPT **
//** 20.03.21

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
        cout << "ENTER TWO NUMBERS:" << endl;
        cin >> p >> q;
    }
    static void setstatic()
    {
        cout << "ENTER STATIC VARIABLE VALUE:" << endl;
        cin >> a;
    }
    void showdata()
    {
        cout << "SUM:" << p + q << endl
             << "STATIC:" << a << endl;
    }
    static void showstatic()
    {
        cout << "STATIC:" << a << endl;
    }
};

int data::a;
// void data::showstatic();

int main()
{
    // data obj1;
    // obj1.setstatic();
    // obj1.showstatic();
    data::setstatic();
    data::showstatic();

    return (0);
}