//** C++ Program to find Sum of odd numbers between 1 and 100 using class

// #include <iostream>
// using namespace std;

// class data
// {
// private:
//     static int sum;

// public:
//     static void setdata()
//     {
//         for (int i = 0; i < 100; i++)
//         {
//             if (i % 2 != 0)
//             {
//                 sum += i;
//             }
//         }
//     }

//     static void showdata()
//     {
//         cout << "SUM: " << sum
//              << endl;
//     }
// };

// int data::sum;

// int main()
// {
//     data::setdata(); //? NO NEED OF OBJECTS HERE.
//     data::showdata();
//     return (0);
// }

// *******************************************************************************************************************************************
// *RIVISON*

#include <iostream>

class data
{
private:
    int lim1, lim2;
    static int sum;

public:
    void read(int X, int Y)
    {
        lim1 = X;
        lim2 = Y;
    }

    void add()
    {
        for (int i = lim1; i <= lim2; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
    }

    void write()
    {
        std::cout << "SUM: " << sum;
    }
};

int data::sum;

int main()
{
    data obj;
    int lim1, lim2;

    std::cout << "ENTER FIRST AND SECOND LIMIT: " << std::endl;
    std::cin >> lim1 >> lim2;

    obj.read(lim1, lim2);
    obj.add();
    obj.write();

    return (0);
}