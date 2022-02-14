//**C++ | Define a class method outside the class definition

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;

public:
    void setdata();
    void showdata();
};


int main()
{
    data obj1;
    obj1.setdata();
    obj1.showdata();
    return (0);
}

void data::setdata()
{
    cout << "ENTER LENGTH AND BREADTH: " << endl;
    cin >> a >> b;
}

void data::showdata()
{
    cout << "THE AREA OF RECTANGLE IS: " << a * b << endl;
}
