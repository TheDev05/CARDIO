//**C++ Program to show access to private,public and protected using Inheritance

#include <iostream>

class data
{
    int a;

protected:
    int b;

public:
    int c;

    void read_a(int x)
    {
        a = x;
    }

    void read_b(int y)
    {
        b = y;
    }

    void show_a()
    {
        std::cout << "a: " << a << '\n';
    }

    void show_b()
    {
        std::cout << "b: " << b << '\n';
    }

    void read_c(int z)
    {
        c = z;
    }

    void show_c()
    {
        std::cout << "c: " << c << '\n';
    }
};

class margin : public data
{

public:
    void show()
    {

        // std::cout << "a: " << a << '\n'; //not directly

        show_a();
        std::cout << "b: " << b << '\n' //can directly: public & protected
                  << "c: " << c << '\n';
    }
};

int main()
{
    margin pop;

    pop.read_a(1);
    pop.read_b(2);
    pop.read_c(3);

    pop.show();

    return (0);
}