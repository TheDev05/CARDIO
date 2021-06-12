//*MEMBER FUNCTION OUTSIDE CLASS: UNIARY OPERATOR OVERLOADING*

#include <iostream>

class data
{
private:
    int x;

public:
    // void operator-();
    data operator-();

    void read(int p)
    {
        x = p;
    }

    void write()
    {
        std::cout << "X: " << x << std::endl;
    }
};

data data::operator-()
{
    data temp;
    temp.x = -x;

    return (temp);
}

// void data::operator-()
// {
//     x = -x;
// }

int main()
{
    data obj1;
    int input;

    std::cout << "ENTER INPUT VALUE: " << std::endl;
    std::cin >> input;

    obj1.read(input);

    obj1 = -obj1;
    // -obj1;

    obj1.write();

    return (0);
}