// Friend function accesing two classes at a time

#include <iostream>

class data2;

class data1
{
    int val1;

public:
    void fill_val(int x)
    {
        val1 = x;
    }

    friend void add(data1, data2);
};

class data2
{
    int val1;

public:
    void fill_val(int p)
    {
        val1 = p;
    }

    friend void add(data1, data2);
};

void add(data1 x, data2 y)
{
    std::cout << "sum is: " << x.val1 + y.val1 << '\n';
}

int main()
{
    data1 obj1;
    data2 obj2;

    obj1.fill_val(1);
    obj2.fill_val(2);

    add(obj1, obj2);

    return (0);
}