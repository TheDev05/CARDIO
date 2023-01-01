// ** STATIC MEMBER CONCEPT **
// **ACCESSING PUBLIC NOT PRIVATE STATIC MEMBERS**
// **23.03.21**

#include <iostream>
using namespace std;

class data
{
private:
    int b;

public:
    static int a; //** IMPORTANT: WE HAVE TO MAKE IT PUBLIC SO HAT WE CAN USE IT INSIDE MAIN
                  //** FOR ACCESIING PVT STATIC MEMBER WITHOUT OBJECT, WE HAVE TO DCREATE STATIC FUNCTION

    void setdata(int X)
    {
        b = X;
    }

    void showdata()
    {
        cout << "SUM: " << a + b << endl;
    }
};

int data::a;

int main()
{
    data obj1;
    obj1.setdata(2);
    data::a = 30;
    obj1.showdata();
    return (0);
}