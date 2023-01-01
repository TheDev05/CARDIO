//**  visiblity:protected/private **

#include <iostream>

class data
{
private:
    int a;

public:
    void read(int p)
    {
        a = p;
    }
    void show()
    {
        std::cout << a;
    }
};

class margin : private data
{
public:
    void foo(int y)
    {
        read(y);
    }
    void pol()
    {
        show();
    }
};

int main()
{
    data onbj;
    margin popo;

    popo.foo(5);
    popo.pol();
}