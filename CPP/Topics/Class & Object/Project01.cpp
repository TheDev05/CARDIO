//** C++ program to find greatest b/w 3 nos. by defining the functions inside class

#include <iostream>
using namespace std;

class large
{
private:
    int a, b, c;

public:
    void setdata()
    {
        cout << "ENTER 03 NUMBERS RESPECTIVELY: " << endl;
        cin >> a >> b >> c; //? dont use endl with cin.
    }
    int getlarge()
    {
        if (a > b && a > c)
        {
            return (a);
        }
        else
        {
            if (b > a && b > c)
            {
                return (b);
            }
            else
                return (c);
        }
    }
};

int main()
{
    large num1;
    int x;

    num1.setdata();
    x = num1.getlarge();
    cout << "THE LARGEST AMONG 3 NUMBER IS: " << x << endl;
    return (0);
}
