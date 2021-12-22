// Member function outside class

#include <iostream>

class data
{
    int atom1, atom2;

public:
    void fill();

    void add()
    {
        std::cout << "sum is: " << atom1 + atom2 << '\n';
    }
};

void data::fill()
{
    std::cout << "Enter two values: " << '\n';
    std::cin >> atom1 >> atom2;
}

int main()
{
    data spin;

    spin.fill();
    spin.add();

    return (0);
}