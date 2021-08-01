/* Hello Stalker!,
 * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
 * With God's Grace, Let's Begin this journey!
*/

#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        long long n;
        std::cin >> n;

        std::vector<int> res;
        for (int i = 2; i * i <= n; i++)
        {

            if (n % i == 0)
            {
                res.push_back(i);
            }
        }

        int count = res.size();

        if (res[0] * res[count - 1] * res[count - 2] == n)
        {
            std::cout << "YES\n";
            std::cout << res[0] << " " << res[count - 2] << " " << res[count - 1] << '\n';
        }
        else
            std::cout << "NO\n";
    }
}