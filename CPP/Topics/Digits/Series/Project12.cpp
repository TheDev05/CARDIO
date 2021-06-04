//**C program to calculate the sum of series 1 +1/x^1 + 1/x^2 + 1/x^3 ... + 1/x^n terms.

#include <iostream>

float power(float x, float i)
{
    float prod = 1;
    for (int j = 1; j <= i; j++)
    {
        prod *= x;
    }
    return (prod);
}

int main()
{
    int n;

    std::cout << "ENTER OUTPUT LIMITS: " << std::endl;
    std::cin >> n;

    float x;
    std::cout << "ENTER VALUE OF X: " << std::endl;
    std::cin >> x;

    float sum = 0.0;
    for (int i = 0; i <= n; i++)
    {
        sum += 1 / power(x, i);
    }

    std::cout << "SUM OF TERMS: " << sum << std::endl;
    return (0);
}