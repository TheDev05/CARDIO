// ** OPERATOR OVERLOADING CONCEPT **

#include <iostream>
using namespace std;

class data
{
private:
    int a, b;
    static int sum;

public:
    data(int X = 0, int Y = 0)
    {
        a = X;
        b = Y;
    }

    data operator+(data P) //? here default copy constructor is called...we can also create one by ourself.
    {
        data temp;
        temp.a = a + P.a;
        temp.b = b + P.b;
        return (temp);
    }
  
    void showdata()
    {
        sum = a + b;
        cout << "SUM: " << sum << endl;
    }
};

int data::sum;

int main()
{
    data obj1(2, 3), obj2(4, 5), obj3;
    obj3 = obj1 + obj2;
    obj3.showdata();
    return (0);
}