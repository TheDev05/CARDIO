//*STATIC VARIABLE CONCEPT*

#include <iostream>
class data
{
private:
    int x;

public:
    static int sum;
    void read(int p)
    {
        x = p;

        add(p);
    }

    void add(int q)
    {
        sum += q;
    }
};

int data::sum;

int main()
{
    data obj1, obj2;
    obj1.read(5);
    obj2.read(10);

    std::cout << "SUM: " << data::sum;
    return (0);
}