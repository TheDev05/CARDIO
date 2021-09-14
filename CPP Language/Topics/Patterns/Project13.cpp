/*
C program to print character pyramid as given below:
A 
B C 
D E F 
G H I J 
K L M N O
*/

#include <iostream>
int main()
{
    char input = 'A';

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            std::cout << input << " ";
            input++;
        }
        std::cout << std::endl;
    }
    return (0);
}