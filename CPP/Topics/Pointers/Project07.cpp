//**Program to swap two numbers using pointers.

#include <iostream>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a, b;

    // int *p1 = &a;
    // int *p2 = &b;

    std::cout << "ENTER 2 VALUES: " << std::endl;
    std::cin >> a >> b;

    swap(&a, &b);

    // swap(p1, p2);

    std::cout
        << "AFTER SWAPPING: " << std::endl;
    std::cout << "A: " << a << std::endl
              << "B: " << b;

    return (0);
}