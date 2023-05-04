#include <bits/stdc++.h>
using namespace std;

int main()
{
    int copy, original;
    std::cin >> copy >> original;

    int temp = original - 1;
    bool ok = true;

    if (original == 0 || (original == 1 && copy > 1))
    {
        std::cout << "No\n";
        return 0;
    }

    if (copy < temp)
    {
        std::cout << "No\n";
        return 0;
    }
    else
    {
        if ((copy - temp) & 1)
            std::cout << "No\n";
        else
            std::cout << "Yes\n";

        return 0;
    }
}