/* Hello Stalker!,
 * Just Believe in Yourself, Its Okay to Inspire/ Learn from others' code but never copy them,
 * With God's Grace, Let's Start!
*/

#include <iostream>

int main()
{

    int n;
    std::cin >> n;

    int ev_count = 0, od_count = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;

        if (val % 2 == 0)
        {
            ev_count++;
        }
        else
            od_count++;
    }

    if (ev_count > od_count)
    {
        std::cout << "READY FOR BATTLE" << '\n';
    }
    else
    {
        std::cout << "NOT READY" << '\n';
    }
}