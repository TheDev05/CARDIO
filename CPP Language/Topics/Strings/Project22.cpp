//**C program to create and print array of strings
//** (not array of characters but array of strings)


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
        std::cin.getline(str[i], 20);
    }

    std::cout << "STRINGS GIVEN AS, " << std::endl;
    for (int i = 0; i < strings; i++)
    {

        std::cout << "String " << i << " : " << str[i] << std::endl;
    }

    return (0);
}

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>
int main()
{
    char bot[10][30] = {
        "Hello!",
        "What's Your Name?",
        "How is Your, Maths Buddy!",
        "Okay so, Lets Solve 4+5", "Nice To Talk With You!"};

    char user[10][20];
    int input;

    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            std::cout << "How're You, " << user[1] << std::endl;
            std::cin >> user[i];
        }

        std::cout << bot[i] << std::endl;

        if (i == 3)
        {
            std::cin >> input;

            if (input == 9)
            {
                std::cout << "Whoa!, Great" << std::endl;
            }
            else
                std::cout << "Oops!, I Think You Should Practice more." << std::endl;
        }
        else
            std::cin >> user[i];

        if (i == 4)
        {
            break;
        }
    }

    std::cout << "USER INPUT HISTORY: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << user[i] << std::endl;
    }
    return (0);
}