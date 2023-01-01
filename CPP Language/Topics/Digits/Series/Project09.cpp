//**C program to find the sum of series 1.2/3 + 2.3/4 + 3.4/5 + 4.5/6 + ... + n(n +1)/(n+2).

//TODO: IMPORTANT

#include <iostream>

int main()
{
    float n;

    std::cout << "ENTER VALUE OF N: " << std::endl;
    std::cin >> n;

 
    float sum = 0.0;

    for (int i = 1; i <= n; i++)
    {
        sum += (float)n * (((float)n + 1) / ((float)n + 2));
    }

    std::cout << "SUM OF GIVES TERMS SERIES: " << sum << std::endl;
    return (0);
}