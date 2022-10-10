//**TEMPLATE**

#include <iostream>

template <class Data>
class sum
{
    Data a, b;

public:
    void read(Data x, Data y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        std::cout << a + b << '\n';
    }
};

int main()
{
    sum<int> obj1;
    sum<float> obj2;

    obj1.read(2, 3);
    obj2.read(2.1, 1.1);

    obj1.add();
    obj2.add();

    return (0);
}