//**C program to create and print array of strings
//** (not array of characters but array of strings)

//**PRE-INITIALISED**

// #include <iostream>
// int main()
// {
//     char str[6][20] = {{"HELLO BUDDY!"}, {"HOW ARE YOU?"}, {"ASK ME SOMETHING"}, {"DO YOU KNOW INDIA?"}, {"THANK YOU!"}};

//     for (int i = 0; i < 6; i++)
//     {

//         std::cout << str[i] << std::endl;
//     }

//     return (0);
// }

//**USER-INPUT**

#include <iostream>
#include <vector>

int main()
{
    char str[50][20];
    int strings;

    std::cout << "INPUT LIMIT OF STRINGS: " << std::endl;
    std::cin >> strings;

    fflush(stdin);
    // std::cin.sync();
    

    std::cout << "ENTER YOUR STRING: " << std::endl;
    for (int i = 0; i < strings; i++)
    {

        std::cout << "String " << i + 1 << " : ";
        std::cin.getinel(str[i], 20);
    }

    std::cout << "STRINGS GIVEN AS, " << std::endl;
    for (int i = 0; i < strings; i++)
    {

        std::cout << "String " << i << " : " << str[i] << std::endl;
    }

    return (0);
}
