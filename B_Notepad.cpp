#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::string text;
        std::cin >> text;

        map<string, int> data;
        for (int i = 0; i < n - 1; i++)
        {
            data[text.substr(i, 2)] = i;
        }

        bool ok = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (data.count(text.substr(i, 2)) && data[text.substr(i, 2)] > i + 1)
            {
                std::cout << "YES\n";

                ok = true;
                break;
            }
        }

        if (ok)
            continue;

        std::cout << "NO\n";
    }
}