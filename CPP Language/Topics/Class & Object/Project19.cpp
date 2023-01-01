//**C++ | Create an object of a class and access class attributes

#include <iostream>
using namespace std;

class data
{
private:
    int a;

public:
    void setadata()
    {
        cout << "ENTER YOUR NUMBERS: " << endl;
        cin >> a;
    }
    void showdata()
    {
        cout << "THE SQUARE OF " << a << " IS: " << a * a << endl;
    }
};

int main()
{
    data obj1;
    obj1.setadata();
    obj1.showdata();
    return (0);
}