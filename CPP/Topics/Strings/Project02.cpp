//**C++ Program To Print Reverse A Sentence

#include <iostream>
#include <cstring>

int main()
{
    char sen[20];

    std::cout << "ENTER YOUR SENTENCE: " << std::endl;
    std::cin.getline(sen, 20);

    int count;
    count = strlen(sen);

    for (int i = count - 1; i >= 0; i--)
    {
        std::cout << sen[i];
    }
    return (0);
}