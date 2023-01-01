//*C program to find the sum of series 1.2/3 + 2.3/4 + 3.4/5 + 4.5/6 + ... + n(n +1)/(n+2).

//TODO: RIVISON NEEDED


#include <iostream>

int main()
{
    int count;
    std::cout << "ENTER OUTPUT LIMIT:" << std::endl;
    std::cin >> count;

    // count = count * ((count + 1) / (count + 2));

    float sum = 0.0;

    for (int i = 1; i <= count; i++)
    {
        sum += (float)count * (((float)count + 1) / ((float)count + 2));
    }

    std::cout << "SUM OF SERIES: " << sum;
    return (0);
}