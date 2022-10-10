//**PRINT**

//   A
//   B B
//   C C C
//   D D D D

#include <iostream>

int main()
{
    char letter = 'A';

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << letter << " ";
        }
        letter = letter + 1;
        std::cout << std::endl;
    }

    return (0);
}