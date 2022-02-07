/* Find sum of factors of a number : STRIVER */

#include <iostream>
int main()
{
    int n, k;
    std::cin >> n >> k;

    int index = n, i = 1;

    while (index <= (n * 10))
    {

        index = n * i;

        if (index % 10 == 0)
        {
            std::cout << i << '\n';
            break;
        }
        else if (index % 10 == k)
        {
            std::cout << i << '\n';
            break;
        }

        i++;
    }
}