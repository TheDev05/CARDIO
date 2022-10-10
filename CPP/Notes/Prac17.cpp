//** OPERATOR OVERLOADING WITH SUBTRACTION OPERATOR **
//**23.03.21

#include <iostream>
using namespace std;

class data
{
private:
    int a;

public:
    void setdata()
    {
        cout << "ENTER YOUR NUMBER: " << endl;
        cin >> a;
    }
    data operator-()
    {
        data temp;
        temp.a = -a;
        return (temp);
    }
    void showdata()
    {
        cout << "AFTER NEGATION: " << a << endl;
    }
};

int main()
{
    data obj1, obj2;
    obj1.setdata();
    obj2 = -obj1;
    obj2.showdata();
    return (0);
}