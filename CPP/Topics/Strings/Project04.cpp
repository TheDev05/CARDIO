//**C++ Program To Check String Is Palindrome Or Not

#include <iostream>
#include <cstring>

int main()
{
    char sen[20];

    std::cout << "ENTER A STRING: " << std::endl;
    std::cin.getline(sen, 20);

    int count = strlen(sen);

    int key = 0;

    for (int i = 0; i < count / 2; i++)
    {
        if (sen[i] == sen[count - 1 - i])
        {
            key++;
        }
    }

    if (key == count / 2)
        std::cout << "\"" << sen << "\""
                  << " IS PALINDROME.";

    else
        std::cout << "\"" << sen << "\""
                  << " IS NOT A PALINDROME.";

    return (0);
}