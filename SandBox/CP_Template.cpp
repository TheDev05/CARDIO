/* Hello Stalker!,
 * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
 * With God's Grace, Let's Begin this journey!
*/

#include <iostream>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        int num[n];
        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];
        }

        int result = num[0];
        for (int i = 1; i < n; i++)
        {
            result = std::__gcd(result, num[i]);

            if (result == 1)
            {
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            std::cout << (num[i] / result) << " ";
        }

        std::cout << '\n';
    }
}