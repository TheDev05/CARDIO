//**C++ Program To Copy One String To Another

// #include <iostream>
// #include <cstring>

// int main()
// {
//     char str1[10], str2[10];

//     std::cout << "ENTER LAST NAME: " << std::endl;
//     std::cin.getline(str2, 10);

//     strcpy(str1, str2); // last name is coping to first name.

//     std::cout << "SIR NAME: " << str1 << std::endl;

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

void copy(char *p1, char *p2)
{
    int count1 = len(p1);
    int count2 = len(p2);

  
    for (int i = 0; i < count2; i++)
    {
        *(p1 + i) = *(p2 + i);
    
    }

    *(p1 + count2) = '\0';
}

int main()
{
    char text1[20], text2[20];

    std::cout << "ENTER YOUR FIRST TSRING: " << std::endl;
    std::cin.getline(text1, 20);

    std::cout << "ENTER YOUR SECOND TSRING: " << std::endl;
    std::cin.getline(text2, 20);

    copy(text1, text2);

    std::cout << "TEXT1: " << text1 << std::endl;
    return (0);
}