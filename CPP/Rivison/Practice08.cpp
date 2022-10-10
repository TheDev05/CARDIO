// Method Overloading

#include <iostream>

class data
{
    int val1, val2, val3;

public:
    void set_data()
    {
        std::cout << "Enter three values: " << '\n';
        std::cin >> val1 >> val2 >> val3;
    }

    int add(int, int);
    int add(int, int, int);

    void sum_overload()
    {
        std::cout << "first overload sum is: " << add(val1, val2) << '\n';
        std::cout << "second overload sum is: " << add(val1, val2, val3) << '\n';
    }
};

int data::add(int val1, int val2)
{
    return (val1 + val2);
}

int data::add(int val1, int val2, int val3)
{
    return (val1 + val2 + val3);
}

int main()
{
    data obj;

    obj.set_data();
    obj.sum_overload();

    return (0);
}