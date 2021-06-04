//**C++ Program To Find Fibonacci Series Using Functions

// #include <iostream>

// void fib()
// {
//     int a = 0, b = 1;

//     for (int i = 0; i < 10; i++)
//     {
//         std::cout << a << " ";
//         int res_a = a;
//         a = b;
//         b = res_a + b;
//     }
// }

// int main()
// {

//     fib();

//     return (0);
// }

#include <iostream>
int main()
{
    int a = 1, b = 0;
    int count;
    std::cout << "ENTER THE OUTPUT LIMIT: " << std::endl;
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        std::cout << b << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    return (0);
}