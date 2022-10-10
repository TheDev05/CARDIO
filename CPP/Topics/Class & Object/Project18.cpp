//**C++ program to multiply every member by 10 using class

#include <iostream>
using namespace std;

class data
{
private:
    int a, b, c;

public:
    data(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void showdata()
    {
        cout << "A: " << a * 10 << endl
             << "B: " << b * 10 << endl
             << "C: " << c * 10 << endl;
    }
};

int main()
{
    data obj1(2, 4, 5);
    obj1.showdata();
    return (0);
}
