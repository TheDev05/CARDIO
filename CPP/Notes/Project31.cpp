//*FRIEND FUNCTION*

#include <iostream>
class data;

class margin
{
private:
    int a;

public:
    void read()
    {
        std::cout << "ENTER VALUE OF A: " << std::endl;
        std::cin >> a;
    }
    friend void foo(data, margin);
};

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

    friend void foo(data, margin);
};

void foo(data x, margin y)
{
    std::cout << "ADIING A OF BOTH: " << x.a + y.a;
}

int main()
{
    data obj;
    margin obj1;

    obj.read(2, 3);
    obj1.read();

    foo(obj, obj1);

    return (0);
}