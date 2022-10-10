//  ** STATIC FUNCTION CONCEPT **
// **ACCESSING PRIVATE STATIC MEMBERS**
// **23.03.21**

#include <iostream>
using namespace std;

class data
{
private:
    int a;
    static int b;

public:
    void setdata(int X)
    {
        a = X;
    }

    void showdata()
    {
        cout << "SUM: " << a + b << endl;
    }

    static void setstat(int Y)
    {
        b = Y;
    }
};

int data::b;

int main()
{
    data obj1;
    obj1.setdata(5);
    data::setstat(30); 
    obj1.showdata();
    return (0);
}
