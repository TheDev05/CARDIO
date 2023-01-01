//**INHERITENCE**

#include <iostream>

class data
{
private:
    int a, b;

public:
    void read(int x, int y)
    {
        a = x;
        b = y;
    }
};

class margin : private data
{
private:
    int p;

public:
    margin(int x)
    {
        p = x;
    }
    void input(int p, int q)
    {
        read(p, q);
    }
};

int main()
{
    data obj;
    obj.read(3, 4);

    margin rum(5);

    rum.input(0,0); //for accessing private inherited members
    // rum.read(0, 0);
}