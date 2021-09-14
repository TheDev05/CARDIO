//* BINARY: OPERATOR OVERLOADING*


#include <iostream>

class data
{
private:
    int x;
    int y;

public:
    void read(int p, int q)
    {
        x = p;
        y = q;
    }

    data operator+(data p)
    {
        data temp;
        temp.x = x + p.x;
        temp.y = y + p.y;

        return (temp);
    }

    void write()
    {
        std::cout << "X: " << x << std::endl
                  << "Y: " << y << std::endl;
    }
};

int main()
{
    data obj1, obj2, obj3;

    obj1.read(2, 3);
    obj2.read(4, 1);

    obj3 = obj1 + obj2;
    obj3.write();

    return (0);
}