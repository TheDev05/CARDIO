// Friend function

#include <iostream>

class data
{
    int val1, val2;

public:
    void set_data(int x, int y)
    {
        val1 = x;
        val2 = y;
    }

    friend void add(data);
};

void add(data p)
{
    std::cout << "sum is: " << p.val1 + p.val2 << '\n';
}

int main()
{
    data obj;

    obj.set_data(1, 2);
    add(obj);

    return (0);
}
