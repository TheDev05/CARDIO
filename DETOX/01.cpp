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

        bool ok = true;
        int count = 1;

        for (int i = 0; i < text.size(); i++)
        {
            if (i == count)
            {
                if (i < text.size() - 1 && text[i] == text[i + 1])
                {
                    i++;
                }
                else
                {
                    ok = false;
                    break;
                }

                count = count + 3;
            }
        }

        if (ok)

            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
}