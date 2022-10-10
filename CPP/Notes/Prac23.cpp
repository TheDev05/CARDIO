// ** CONSTRUCTOR **

#include <iostream>
using namespace std;

class data
{
private:
    int a;

public:
    data(int p)
    {
        a = p;
    }

    void showdata()
    {
        cout << "OUTPUT: " << a << endl;
    }
};

int main()
{
    data obj1(10);
    obj1.showdata();
    return (0);
}