//** C++ program to find greatest b/w 3 nos. by defining the functions inside class

// #include <iostream>
// using namespace std;

// class large
// {
// private:
//     int a, b, c;

// public:
//     void setdata()
//     {
//         cout << "ENTER 03 NUMBERS RESPECTIVELY: " << endl;
//         cin >> a >> b >> c; //? dont use endl with cin.
//     }
//     int getlarge()
//     {
//         if (a > b && a > c)
//         {
//             return (a);
//         }
//         else
//         {
//             if (b > a && b > c)
//             {
//                 return (b);
//             }
//             else
//                 return (c);
//         }
//     }
// };

// int main()
// {
//     large num1;
//     int x;

//     num1.setdata();
//     x = num1.getlarge();
//     cout << "THE LARGEST AMONG 3 NUMBER IS: " << x << endl;
//     return (0);
// }

// *******************************************************************************************************************************************
// *RIVISON*

#include <iostream>

class data
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

    void max();
};

void data::max()
{

    if (a > b && a > c)
    {
        std::cout << a << " IS LARGER AMONG ALL" << std::endl;
    }

    else if (b > a && b > c)
    {
        std::cout << b << " IS LARGER AMONG ALL" << std::endl;
    }

    else if (c > a && c > b)
    {
        std::cout << c << " IS LARGER AMONG ALL" << std::endl;
    }
}

int main()
{
    data obj;
    obj.read(2, 1, 4);
    obj.max();

    return (0);
}