/* Hello Stalker!,
 * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
 * With God's Grace, Let's Begin this journey!
*/

#include <iostream>
int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        n = n / 2;
        n = n - 1;

        std::cout << (n * (n + 1)) / 2 << '\n';
    }
}