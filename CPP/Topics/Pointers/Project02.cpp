//**FINDING FACTORIAL USING POINTER:

#include <iostream>
void fact(int *p);

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER:" << std::endl;
    std::cin >> num;

    fact(&num);

    return (0);
}

void fact(int *p)
{
    int product = 1;

    while (*p >= 1)
    {
        product *= (*p);
        std::cout << *p << "*";

        // *p = (*p - 1);
        // *p-- //? here we cannt do just *p--;

        (*p)--;
    }
    std::cout << "=" << product << std::endl;
}