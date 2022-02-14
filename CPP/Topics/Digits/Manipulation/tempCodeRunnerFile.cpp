#include <iostream>
int main()
{
    int num;
    std::cout << "ENTER DECIMAL NUMBERS: " << std::endl;
    std::cin >> num;

    int sum = 0;
    int p = 1;

    for (int i = 0; num != 0; i++)
    {
        int rem = num % 2;
        // sum+=sum*10+rem*i;
        sum = sum * 1 + rem * p;
        p = p * 10;
        num = num / 2;
    }

    std::cout << sum;
    return (0);
}