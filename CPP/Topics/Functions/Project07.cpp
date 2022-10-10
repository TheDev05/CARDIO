//**Input Format::
// Input will contain four integers -  , one per line.

// Output Format:
// Return the greatest of the four integers.

#include <iostream>
int find_max(int, int, int, int);

int main()
{
    int num1, num2, num3, num4;

    std::cout << "ENTER 4 DIGITS ONE BY ONE:" << std::endl;
    std::cin >> num1 >> num2 >> num3 >> num4;

    std::cout << find_max(num1, num2, num3, num4) << std::endl;
    return (0);
}

int find_max(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return (a);
    }
    else
    {
        if (b > a && b > c && b > d)
        {
            return (b);
        }

        else
        {
            if (c > d && c > a && c > b)
            {
                return (c);
            }
            else
                return (d);
        }
    }
}