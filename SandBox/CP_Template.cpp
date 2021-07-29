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

        std::sort(num, num + n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int p = i;
            int count = 0;

            while (num[i] == num[p])
            {
                count++;
                p++;

                i = p - 1;
            }

            if (count >= num[i] - 1)
            {
                sum += num[i] - 1;
            }
            else
                sum += count;
        }

        std::cout << sum << '\n';
    }
}