//** TEMPLATE: CLASS **

#include <iostream>
#include <string>

template <class x, class y>
class data
{
    x val;
    y dig;

public:
    void read(x s, y num)
    {
        val = s;
        dig = num;
    }

    void write()
    {
        std::cout << val << " " << dig;
    }
};

// class margin
// {
//     int val;

// public:
//     void read(int s)
//     {
//         val = s;
//     }

//     void write()
//     {
//         std::cout << val;
//     }
// };

int main()
{
    data<std::string, int> obj1;

    obj1.read("ankit", 18);
    obj1.write();

    return (0);
}