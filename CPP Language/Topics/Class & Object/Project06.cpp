//** C++ program to add two complex number passing objects as arguments

// #include <iostream>
// using namespace std;

// class data
// {
// private:
//     int a, b;

// public:
//     void setdata()
//     {
//         cout << "ENTER REAL PART THEN IMAGINARY PART OF COMPLEX NUMBER: " << endl;
//         cin >> a >> b;
//     }
//     data operator+(data p)
//     {
//         data temp;
//         temp.a = a + p.a;
//         temp.b = b + p.b;
//         return (temp);
//     }
//     void showdata()
//     {
//         cout << a << " + i" << b << endl;
//     }
// };

// int main()
// {
//     data obj1, obj2, sum;
//     obj1.setdata();
//     obj2.setdata();
//     // sum = obj1 + obj2;
//     sum = obj1.operator+(obj2);

//     sum.showdata();
//     return (0);
// }

// *******************************************************************************************************************************************
// *RIVISON*

#include <iostream>

class data
{
private:
    int real, imag;

public:
    void read(int x, int y)
    {
        real = x;
        imag = y;
    }

    data add(data);

    void write()
    {
        std::cout << real << "+i" << imag << std::endl;
    }
};

data data::add(data p)
{
    data temp;
    temp.real = real + p.real;
    temp.imag = imag + p.imag;

    return (temp);
}

int main()
{
    data obj1, obj2, obj3;
    int real1, imag1, real2, imag2;

    std::cout << "ENTER REAL THEN IMAGNIARY PART OF FIRST NUMBER: " << std::endl;
    std::cin >> real1 >> imag1;

    std::cout << "ENTER REAL THEN IMAG OF SECOND NUMBER: " << std::endl;
    std::cin >> real2 >> imag2;

    obj1.read(real1, imag1);
    obj2.read(real2, imag2);

    obj3 = obj1.add(obj2);
    obj3.write();

    return (0);
}
