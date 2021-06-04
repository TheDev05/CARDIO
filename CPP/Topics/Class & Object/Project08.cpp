//** C++ Program to find Sum of odd numbers between 1 and 100 using class

#include <iostream>
using namespace std;

class data
{
private:
    static int sum;

public:
    static void setdata()
    {
        for (int i = 0; i < 100; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
    }

    static void showdata()
    {
        cout << "SUM: " << sum
             << endl;
    }
};

int data::sum;

int main()
{
    data::setdata(); //? NO NEED OF OBJECTS HERE.
    data::showdata();
    return (0);
}