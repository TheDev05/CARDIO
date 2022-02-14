//**C++ Program to Print Numbers From 1 to n using class

#include <iostream>
using namespace std;

class data
{
private:
    int a;

public:
    void setdata()
    {
        cout << "ENTER THE LIMIT OF NUMBER TOU WANNA PRINT" << endl;
        cin >> a;
    }

    void showdata()
    {
        for (int i = 1; i <= a; i++)
        {
            cout << i << " ";
        }
    }
};

int main()
{
    data obj1;
    obj1.setdata();
    obj1.showdata();
    return (0);
}