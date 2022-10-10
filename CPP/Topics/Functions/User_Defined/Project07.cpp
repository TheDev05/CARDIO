//**C program to swap two strings using user define function.

#include <iostream>

int strlen(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    return (i);
}

void swap(char *p1, char *p2)
{
    int count1 = strlen(p1);
    int count2 = strlen(p2);

    if (count1 != count2)
    {
        std::cout << "SWAP CANOT BE DONE, BOTH STRINGS ARE OF DIFFRENT LENGTH" << std::endl;
        return;
    }

    for (int i = 0; i < count1; i++)
    {
        char temp = *(p1 + i);

        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    *(p1 + count1) = '\0';
    *(p2 + count1) = '\0';
}

int main()
{
    char str1[20], str2[20];

    std::cout << "ENTER YOUR FIRST STRING: " << std::endl;
    std::cin.getline(str1, 20);

    std::cout << "ENTER SECOND STRIND: " << std::endl;
    std::cin.getline(str2, 20);

    swap(str1, str2);

    std::cout << "STRING 01: " << str1 << std::endl;
    std::cout << "STRING 02: " << str2 << std::endl;

    return (0);
}