//**C++ Program To Compare Two String

// #include <iostream>
// #include <cstring>

// int main()
// {
//     char str1[10], str2[20];

//     std::cout << "ENTER FIRST STRING" << std::endl;
//     std::cin.getline(str1, 10);

//     std::cout << "ENTER SECOND STRING: " << std::endl;
//     std::cin.getline(str2, 20);

//     if (strcmp(str1, str2) == 0)
//     {
//         std::cout << "EQUAL" << std::endl;
//     }

//     else
//         std::cout << "NOT EQUAL" << std::endl;
//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>

int len(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
        ;

    return (i);
}

int compare(char *p1, char *p2)
{
    int count1 = len(p1);
    int count2 = len(p2);

    if (count1 != count2)
    {
        return (0);
    }

    for (int i = 0; i < count1; i++)
    {
        if (*(p1 + i) != *(p2 + i))
        {
            return (0);
        }
    }

    return (1);
}

int main()
{
    char text1[20], text2[20];

    std::cout << "ENTER YOUR FIRST STRING: " << std::endl;
    std::cin.getline(text1, 20);

    std::cout << "ENTER YOUR SECOND STRING: " << std::endl;
    std::cin.getline(text2, 20);

    if (compare(text1, text2))
        std::cout << "BOTH STRINGS ARE EQUAL " << std::endl;
    else
        std::cout << "BOTH STRINGS ARE NOT EQUAL" << std::endl;

    return (0);
}