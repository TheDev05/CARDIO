// Copy Constructor

#include <iostream>

class data
{
    int val1, val2;

public:
    data(int x, int y) // parametrized constructor
    {
        val1 = x;
        val2 = y;
    }

    data(data &dash) // copy consructor
    {
        val1 = dash.val1;
        val2 = dash.val2;
    }

    void add()
    {
        std::cout << "sum is: " << val1 + val2 << '\n';
    }
};

int main()
{
    data obj1(2, 3), obj2(obj1);

    obj1.add();
    obj2.add();

    return (0);
}