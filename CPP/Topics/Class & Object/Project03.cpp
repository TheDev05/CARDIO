//** C++ program to add two numbers by Call by address(pointer)

// #include <iostream>
// using namespace std;
// int add(int *, int *);

// int main()
// {
//     int num1, num2, sum;
//     int *ref1 = &num1, *ref2 = &num2;

//     cout << "ENTER TWO NUMBERS:" << endl;
//     cin >> num1 >> num2;

//     sum = add(ref1, ref2);
//     cout
//         << "SUM: " << sum;
//     return (0);
// }

// int add(int *x, int *y)
// {
//     return (*x + *y);
// }

// *******************************************************************************************************************************************
// *RIVISON*

#include <iostream>

int add(int *p1, int *p2)
{
    return (*p1 + *p2);
}

int main()
{
    int a, b;
    std::cout << "ENTER TWO NUMBERS: " << std::endl;
    std::cin >> a >> b;

    std::cout << "SUM:" << add(&a, &b);
    return (0);
}