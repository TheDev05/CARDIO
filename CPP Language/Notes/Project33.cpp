//*MULTI-LEVAL INHERITENCE:*

#include <iostream>

class data
{
private:
    int a, b;

public:
    void read(int p, int q)
    {
        a = p;
        b = q;
    }
    void show()
    {
        std::cout << a + b << '\n';
    }
};

class dev
{
private:
    int m, n;

public:
    void input(int u, int v)
    {
        m = u;
        n = v;
    }
    void output()
    {
        std::cout << m * n << '\n';
    }
};

class margin : public data, public dev
{
};

int main()
{
    data obj;
    dev pop;

    margin lol;
    lol.read(2, 1);
    lol.input(3, 1);

    lol.show();
    lol.output();

    return (0);
}