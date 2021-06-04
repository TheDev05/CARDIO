//**C++ program to demonstrate example of friend function with class.

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;
    static int sum;//? static member variable

public:
    void setadata()
    {
        cout << "ENTER TWO NUMBERS: " << endl;
        cin >> a >> b;
    }
    void showdata()
    {
        cout << "AFTER SQARING AND ADDING: " << sum << endl;
    }
    friend void adddata(data);
};

int data::sum;//? declaration of static member outside main and class.

void adddata(data p)
{
    data temp;
    temp.a = p.a * p.a;
    temp.b = p.b * p.b;
    data::sum = temp.a + temp.b; //? best use of static mem var is to store sum values
}

int main()
{
    data obj1;
     
    obj1.setadata();
    adddata(obj1);
    obj1.showdata();

    return (0);
}