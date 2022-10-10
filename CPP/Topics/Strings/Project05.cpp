//**C++ Program To Find The Length Of Any String

// #include <iostream>
// #include <cstring>

// int main()
// {
//     char name[10]="ANKIT";
//     // char name[] = {'a', 'n', 'k', 'i', 't', '\0'};

//     int count = strlen(name);

//     std::cout << "LENGTH: " << count;
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

int main()
{
    char text[20];
    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(text, 20);

    int count = len(text);
    std::cout << "LENGTH OF STRING IS: " << count << std::endl;
    return (0);
}