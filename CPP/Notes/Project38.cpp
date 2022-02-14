//* OBJECT POINTER**

#include <iostream>

class data
{
private:
    int a;

public:
    void read(int);
    void show();
};

void data::read(int x)
{
    a = x;
}

void data::show()
{
    std::cout << "a: " << a;
}

int main()
{
    data obj;

    data *p;
    p = &obj;

    p->read(5);
    p->show();

    return (0);
}