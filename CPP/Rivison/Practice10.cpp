// Operator overloading(addition, binary operator)

#include <iostream>

class data
{
    int val1, val2;

public:
    void set_val(int x, int y)
    {
        val1 = x;
        val2 = y;
    }

    data operator+(data p)
    {
        data temp;

        temp.val1 = val1 + p.val1;
        temp.val2 = val2 + p.val2;

        return (temp);
    }

    void show_val()
    {
        std::cout << "val1: " << val1 << '\n'
                  << "val2: " << val2 << '\n';
    }
};

int main()
{
    data obj1, obj2, obj3;

    obj1.set_val(1, 2);
    obj2.set_val(2, 3);

    obj3 = obj1 + obj2;

    obj3.show_val();

    return (0);
}