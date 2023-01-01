// Static member function

#include <iostream>

class data
{
    int dot1, dot2;
    static int dash1, dash2;

public:
    void set_data()
    {
        std::cout << "enter 2 values: " << '\n';
        std::cin >> dot1 >> dot2;

        std::cout << "Enter two static value: " << '\n';
        std::cin >> dash1 >> dash2;
    }

    void add_data()
    {
        std::cout << "the sum of 2 values: " << dot1 + dot2 << '\n';
    }

    static void sum_static()
    {
        std::cout << "sum of statics is: " << dash1 + dash2 << '\n';
    }
};

int data::dash1;
int data::dash2;

int main()
{

    data obj;
    obj.set_data();
    obj.add_data();

    data::sum_static();

    return (0);
}