//**C++ Program to access protected data member using Inheritance

#include <iostream>

class data
{

protected:
    int a;

public:
    void read(int x)
    {
        a = x;
    }
    void write()
    {
        std::cout << a << '\n';
    }
};

class margin : public data
{
public:
    void fill(int y)
    {
        a = y;
    }
};

int main()
{
    data obj;
    margin pop;

    obj.read(5);
    obj.write();

    pop.fill(3);
    pop.write();
}