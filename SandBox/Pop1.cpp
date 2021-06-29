// #include <iostream>
#include <stdio.h>

int main()
{
    int t;
    // std::cin >> t;
    scanf("%d", &t);

    while (t--)
    {
        long long a, b;
        // std::cin >> a >> b;
        scanf("%lld %lld", &a, &b);

        double div = (float)a / b;
        int key = 0;

        if (div + div == 1 && div - div == 0)
        {
            // std::cout << "Yes" << '\n';
            printf("Yes\n");
            continue;
        }

        while (!(div + div == 1 && div - div == 0) && div < 1 && div > 0)
        {

            div += div;

            if (div + div == 1 && div - div == 0)
            {
                // std::cout << "Yes" << '\n';
                printf("Yes\n");
                key = 1;
                break;
            }
        }

        if (key == 0)
        {
            // std::cout << "No" << '\n';
            printf("No\n");
        }
    }

    return (0);
}