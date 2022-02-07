/* Sieve of Eratheonis */
/* ? NOT OPTIMISED */

#include <iostream>
int main()
{
    int n;
    std::cin >> n;

    int num[n] = {0};
    num[0] = -1;
    num[1] = -1;

    for (int i = 2; i*i <= n; i++)
    {
        int index = i;

        for (int j = i + i; j < n; j = j + 2)
        {
            if (num[i] != -1 && num[j] != -1)
            {
                num[j] = -1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] != -1)
        {
            std::cout << i << " ";
        }
    }
}