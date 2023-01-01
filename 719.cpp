#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::string text;
    std::cin >> text;

    int bStore = 0, rStore = 0;
    std::string temp1, temp2;

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            temp1 += 'r';
            temp2 += 'b';
        }
        else
        {
            temp1 += 'b';
            temp2 += 'r';
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (text[i] != temp1[i])
        {
            if (temp1[i] == 'b')
            {
                bStore++;
            }
            else
                rStore++;
        }
    }

    int min = std::max(rStore, bStore);

    rStore = 0;
    bStore = 0;

    for (int i = 0; i < n; i++)
    {
        if (text[i] != temp2[i])
        {
            if (temp2[i] == 'b')
            {
                bStore++;
            }
            else
                rStore++;
        }
    }

    min = std::min(min, std::max(rStore, bStore));
    std::cout << min << '\n';
}