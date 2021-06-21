//** CONSTRUCTOR IN INHERITENCE**

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
    data()// you have to crteate this, coz after creation of inherited class object both parent and that class default is invoked
    {
    }
};

class margin : public data
{
private:
    int x;
};

int main()
{
    data obj(5);
    margin pop;
}