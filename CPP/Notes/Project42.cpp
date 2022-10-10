//** POINTER AND INHERITENCE**

#include <iostream>

class data
{
    int x;

public:
    void read(int p)
    {
        x = p;
    }

    void show()
    {
        std::cout << x;
    }
};

class merge : public data
{
    int b;

public:
    void input(int x)
    {
        b = x;
    }

    void show()
    {
        std::cout << b;
    }
};

int main()
{
    data obj;
    obj.read(5);

    merge pop;
    pop.input(2);
    pop.read(6);

    data *p;
    p = &pop;

    // pop.show();
    p->show();

    return (0);
}