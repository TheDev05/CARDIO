//**THIS POINTER CONCEPT**

#include <iostream>

class data
{
private:
    int a;

public:
    data(int y)
    {
        a = y;
    }

    void add(int a)
    {
        //this=similar to=*p=local

        std::cout << this->a + a;
    }
};

int main()
{
    data obj(5);
    obj.add(4);

    return (0);
}