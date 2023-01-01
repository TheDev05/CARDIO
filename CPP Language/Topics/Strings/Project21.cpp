// //**C program to compare two strings using pointers.
// //**WITHOUT LIB FILES

// #include <iostream>

// int len(char *p)
// {
//     int temp;
//     for (temp = 0; *(p + temp) != '\0'; temp++)
//     {
//     }

//     return (temp);
// }

// int compare(char *p1, char *p2)
// {
//     int count1 = len(p1);
//     int count2 = len(p2);
//     int key = 0;

//     if (count1 != count2)
//     {
//         return (1);
//     }

//     for (int i = 0; i < count1; i++)
//     {
//         if (*(p1 + i) == *(p2 + i))
//         {
//             key++;
//         }
//     }

//     if (key == count2)
//     {
//         return (0);
//     }
//     else
//         return (1);
// }

// int main()
// {
//     char str1[20], str2[20];

//     std::cout << "ENTER FIRST STRING: " << std::endl;
//     std::cin.getline(str1, 20);

//     std::cout << "ENTER SECOND STRING: " << std::endl;
//     std::cin.getline(str2, 20);

//     if (compare(str1, str2))
//     {
//         std::cout << "THEY BOTH ARE NOT EQUAL" << std::endl;
//     }

//     else
//         std::cout << "BOTH ARE EQUAL" << std::endl;

//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>

int len(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
        ;
    }

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

        std::cout << "BOTH ARE SAME" << std::endl;

    else
        std::cout << "BOTH ARE DIFFRENT" << std::endl;

    return (0);
}