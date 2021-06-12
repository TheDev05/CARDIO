//** CONSTRUCTOR AND DESTRUCTOR **

#include <iostream>

class data
{
private:
    int a, b;

public:
    // void read(int x, int y)
    // {
    //     a = x;
    //     b = y;
    // }

    void write()
    {
        std::cout << "A: " << a << std::endl
                  << "B: " << b << std::endl;
    }

    data add(data p)
    {
        data temp;
        temp.a = a + p.a;
        temp.b = b + p.b;

        return (temp);
    }

    data(data p, data q)
    {
        a = p.a + q.a;
        b = p.b + q.b;
    }

    // data(data &p)
    // {
    //     ;
    // }

    data(int x, int y)
    {
        a = x;
        b = y;
    }

    data()
    {
        ;
    }
};

int main()
{
    // data obj(3, 4);
    data obj1(2, 3), obj2(5, 5), sum(obj1, obj2);
    // sum = obj1.add(obj2);

    sum.write();

    return (0);
}
