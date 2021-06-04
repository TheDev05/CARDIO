//**C program for sin(x) series.
// SERIES: X-X^3/3!+X^5/5!...

#include <iostream>

float power(float j, float x)
{
    float prod = 1;

    for (int i = 1; i <= j; i++)
    {
        prod *= x;
    }

    return (prod);
}

float fact(float x)
{
    if (x == 1)
    {
        return (1);
    }
    else
    {
        return (x * fact(x - 1));
    }
}

int main()
{
    float x;
    int count;

    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER VALUE OF X: " << std::endl;
    std::cin >> x;

    x = x * 3.14 / 180; //*thetha is converted in radian first.

    float sum = 0.0;
    int j = 1;

    for (int i = 1; i <= count; i++) //*count is term count not n count;
    {

        float sign = (i % 2 == 0) ? -1 : 1;

        sum += power(j, x) / fact(j) * sign;

        j = j + 2;
    }

    std::cout << "SUM: " << sum;
    return (0);
}