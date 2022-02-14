//** C program to find sum of all natural numbers.
//** Series: 1+2+3+4+..N

#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> count;

    int sum = 0;
    for (int i = 1; i <= count; i++) //* i=1, natural number starts fro 1 not 0...or use >=.
    {
        sum += i;
    }

    std::cout << "SUM: " << sum;
    errno_t(0);
}