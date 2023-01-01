//**overloading of increment and decrement operator*

#include <iostream>

class data
{
private:
    int x;

public:
    data operator++();
    data operator++(int);

    void read(int p)
    {
        x = p;
    }

    void write()
    {
        std::cout << "X: " << x << std::endl;
    }
};

data data::operator++()
{
    data temp;
    temp.x = ++x;
    return (temp);
}

data data::operator++(int)
{
    data temp;
    temp.x = x++;
    return (temp);
}

int main()
{
    int input;
    data obj1;

    std::cout << "ENTER YOUR INPUT: " << std::endl;
    std::cin >> input;

    obj1.read(input);
    obj1 = obj1++;
    // obj1 = ++obj1;
    obj1.write();

    return (0);
}