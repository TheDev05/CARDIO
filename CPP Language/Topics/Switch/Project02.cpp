//**C++ Program To Perform All Arithnatic Operations Ie:-(a+b,a-b,a*b,a/b,a%b) Using Switch Case

#include <iostream>

int main()
{
    int choose, num1, num2;

    std::cout << "ENTER 2 NUMBER: " << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "ENTER 0 FOR ADDITION" << std::endl
              << "ENTER 1 FOR SUBTRACTION" << std::endl
              << "ENTER 2 FOR MUNTIPLICATION" << std::endl
              << "ENTER 3 FOR DIVISON" << std::endl;

    std::cin >> choose;

    int temp;
    (num2 < num1) ? temp = num2, num2 = num1, num1 = temp : num1 = num1;

    switch (choose)
    {
    case 0:
        std::cout << num2 + num1;
        break;
    case 1:
        std::cout << num2 - num1;
        break;
    case 2:
        std::cout << num2 * num1;
        break;
    case 3:
        std::cout << num2 / num1;
        break;
    default:
        std::cout << "INVALID ENTRY";
        break;
    }

    return (0);
}