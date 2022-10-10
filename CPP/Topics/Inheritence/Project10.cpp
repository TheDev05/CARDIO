//**C++ Program to illustrates the use of Constructors in single inheritance

#include <iostream>

class data
{
    int a;

public:
    // data()
    // {
    // }

    data(int x = 0)
    {
        a = x;
    }

    void show()
    {
        std::cout << "a: " << a << '\n';
    }
};

class margin : public data
{
    int b;

public:
    margin(int p = 0)
    {
        b = p;
    }

    void write()
    {
        std::cout << "b: " << b << '\n';
    }
};

int main()
{
    data obj(4);

    margin pop(7), lol;
    pop.write();
    lol.write();

    obj.show();

    return (0);
}