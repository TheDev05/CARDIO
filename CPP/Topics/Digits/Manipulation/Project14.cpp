//**FIBBNACII SERIES PRACTICE**

// #include <iostream>

// int main()
// {
//     int lim;
//     int a = 0, b = 1;

//     std::cout << "ENTER PRINTING LIMIT:" << std::endl;
//     std::cin >> lim;

//     int sum = 0;
//     for (int i = 0; i < lim; i++)
//     {
//         std::cout << a << " ";
//         int next = a + b;
//         a = b;
//         b = next;
//     }

//     return (0);
// }

//*******************************************************************************************************************************************
//**RIVISON**

#include <iostream>

int main()
{
    int a = 1, b = 0;
    int count;

    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
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

//*****************************************************************************************************************************************

#include <iostream>
int main()
{
    int a = 1, b = 0;
    int count;

    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
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
