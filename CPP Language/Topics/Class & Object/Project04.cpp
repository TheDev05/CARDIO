//*** C++ program to find how many times function called by objects

// #include <iostream>
// using namespace std;

// class data
// {
// private:
//     int a, b;
//     static int x;

// public:
//     void setdata(int p, int q)
//     {
//         a = p;
//         b = q;
//         x++;
//     }
//     static void showcount()
//     {
//         cout << "THE FUNC CALLED OR TOTAL OBJECT COUNT IS: " << x << endl;
//     }
// };

// int data::x;

// int main()
// {
//     data obj1, obj2;
//     int m;
//     obj1.setdata(2, 4);
//     obj2.setdata(6, 8);
//     data::showcount();
//     return (0);
// }

// *******************************************************************************************************************************************
// *RIVISON*

#include <iostream>

class data
{
private:
    static int count;
    // int count;

public:
    void print()
    {
        count++;
        std::cout << "HELLO WORLD!" << std::endl;
    }

    void read_count()
    {
        std::cout << "COUNT: " << count << std::endl;
    }
};

int data::count;

int main()
{
    data obj1, obj2;

    obj1.print();
    obj2.print();

    obj1.read_count();

    return (0);
}