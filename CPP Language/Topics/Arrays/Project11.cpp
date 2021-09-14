//**C++ Program To Merge Two Array Into Third Array Unconditionally

#include <iostream>

int main()
{
    int num1[20], num2[20], num3[42];
    int count1, count2, count3;

    std::cout << "ENTER FISRT ARRAY INPUT LIMIT: " << std::endl;
    std::cin >> count1;

    std::cout << "ENTER SECOND ARRAY INPUT LIMIT: " << std::endl;
    std::cin >> count2;

    count3 = count1 + count2;

    std::cout << "ENTER FIRST ARRAY ELEMENT: " << std::endl;
    for (int i = 0; i < count1; i++)
    {
        std::cin >> num1[i];
    }

    std::cout << "ENTER SECOND ARRAY ELEMENTS: " << std::endl;
    for (int i = 0; i < count2; i++)
    {
        std::cin >> num2[i];
    }

    for (int i = 0; i < count1; i++)
    {
        num3[i] = num1[i];
    }

    int j = count1;

    for (int i = 0; i < count2; i++)
    {
        num3[j] = num2[i];
        j++;
    }

    std::cout << "OUTPUT: " << std::endl;
    for (int i = 0; i < count3; i++)
    {
        std::cout << num3[i] << " ";
    }

    return (0);
}