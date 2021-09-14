// ** CREATING CLASS AND STORING TWO NUMBERS
// ** 20.03.21

#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void showdata()
    {
        cout << "IMAGINARY NUMBER IS " << a << "+i" << b << endl;
    }
};

int main()
{
    int p, q;
    complex obj1;
    cout << "ENTER INTEGER AND IMAGINARY PART OF NUMBER:" << endl;
    cin >> p >> q;

    obj1.setdata(p, q);
    obj1.showdata();
    return (0);
}