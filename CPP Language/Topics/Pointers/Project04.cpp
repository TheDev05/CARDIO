//**C++ Program For Swapping Two Number In Function Using Pointer

// #include <iostream>

// void swap(int *p1, int *p2)
// {
//     *p1 = *p1 * (*p2);
//     *p2 = *p1 / (*p2);
//     *p1 = *p1 / (*p2);
// }

// int main()
// {
//     int num1, num2;

//     std::cout << "ENTER 2 NUMBERS:" << std::endl;
//     std::cin >> num1 >> num2;

//     swap(&num1, &num2);

//     std::cout << "AFTER SWAPPING: " << std::endl;
//     std::cout << "NUM1: " << num1 << std::endl
//               << "NUM2: " << num2 << std::endl;

//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}

int main()
{
    int num1, num2;

    std::cout << "ENTER TWO NUMBERS: " << std::endl;
    std::cin >> num1 >> num2;

    swap(&num1, &num2);

    std::cout << "NUM1: " << num1 << std::endl
              << "num2: " << num2 << std::endl;

    return (0);
}