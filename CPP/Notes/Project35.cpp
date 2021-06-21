//**PROCTECTED**

#include <iostream>

class data
{
private:
    int a;

protected:
    int b;

public:
    void read(int x)

    {
        b = x;
    }

    // void write()
    // {
    //     std::cout << b;
    // }
};

class margin : public data
{
private:
    int c;

public:
    void puff(int y)
    {
        a = y;
    }
    void write()
    {
        std::cout << a;
    }
};

int main()
{
    data obj;
    margin pop;
    // pop.read(2);
    pop.puff(4);
    pop.write();
}