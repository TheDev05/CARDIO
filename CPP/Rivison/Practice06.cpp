// Constructors, (default & parametrized)

#include <iostream>

class data
{
    int val1, val2;

public:
    data()
    {
        std::cout << "Enter 2 values: " << '\n';
        std::cin >> val1 >> val2;
    }

    data(int x, int y)
    {
        val1 = x;
        val2 = y;
    }

    void add()
    {
        std::cout << "sum is: " << val1 + val2 << '\n';
    }
};

int main()
{
    data obj1;
    data obj2 = data(1, 2);

    obj2.add();
    obj1.add();

    return (0);
}