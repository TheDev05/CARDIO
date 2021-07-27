/* Hello Stalker!,
 * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
 * With God's Grace, Let's Begin this journey!
*/


/* Following Testcases won't work perfecly: 
   12312312, 1231237 etc */

#include <iostream>
int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, k;
        std::cin >> n >> k;

        int lim = n - k;
        std::string s1, s2, ch;

        for (int i = 0; i < n; i++)
        {
            int val;
            std::cin >> val;

            if (i < k)
            {
                ch = std::to_string(val);
                s1 += ch;
            }
            else
            {
                ch = std::to_string(val);
                s2 += ch;
            }
        }

        if (s1 == s2)
        {
            std::cout << "0" << '\n';
        }
        else
        {
            std::cout << n - k << '\n';
        }
    }

    return (0);
}