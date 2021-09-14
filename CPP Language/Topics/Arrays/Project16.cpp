//**C program to count Array elements by using sizeof() operator.

#include <iostream>

int main()
{
    int num[] = {'1', '2', '3', '4', '5'};

    int count = sizeof(num) / sizeof(int);

    std::cout << "TOTAL ELEMENST: " << count;
    
    return (0);
}