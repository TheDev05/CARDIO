//**VIRTUAL FUNCTION**

#include <iostream>

class data
{
    int x;

public:
    void read(int p)
    {
        x = p;
    }

    virtual void show()//* because this method is overiden in its child class
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