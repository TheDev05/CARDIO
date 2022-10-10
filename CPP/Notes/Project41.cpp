//* METHOD OVERRIDING & METHOD HIDING

#include <iostream>

class add_3num
{
private:
    int a, b, c;

public:
    void read(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void add()
    {
        std::cout << a + b + c << '\n';
    }
};

class first_nlast : public add_3num
{
private:
    int p, q, r;

public:
    void input(int d, int e, int f)
    {
        p = d;
        q = e;
        r = f;
    }

    void add()
    {
        std::cout << p + r << '\n';
    }
};

int main()
{
    add_3num obj;
    obj.read(1, 2, 3);

    first_nlast pop;
    pop.input(1, 2, 3);

    obj.add();
    pop.add();

    return (0);
}