//**C++ Program To Print The Fibonacci Series Up to Given Number Of Terms

#include <iostream>

int main()
{
    int num[20], count;
    int sum = 0, j = 0;

    std::cout << "ENTER SERIES TERM LIMIT: " << std::endl;
    std::cin >> count;

    int a = 0, b = 1;

    for (int i = 0; i < count; i++)
    {
        std::cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
     
    }

    return (0);
}

//*******************************************************OR***************************************************************


// #include <iostream>

// int main()
// {
//     int num[20], count;
//     int sum = 0, j = 0;

//     std::cout << "ENTER SERIES TERM LIMIT: " << std::endl;
//     std::cin >> count;

   
//     num[0] = 0;
//     num[1] = 1;

//     for (int i = 2; i < count; i++)
//     {

//         num[i] = num[i - 1] + num[i - 2];
//     }

//     std::cout << "FIBONAACI SERIES: " << std::endl;

//     for (int i = 0; i < count; i++)
//     {
//         std::cout << num[i] << " ";
//     }

//     return (0);
// }
