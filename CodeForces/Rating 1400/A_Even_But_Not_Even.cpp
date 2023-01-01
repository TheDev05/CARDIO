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

        std::string text, temp;
        std::cin >> text;

        for (int i = 0; i < n; i++)
        {
            if (((int)(text[i] - '0')) & 1)
                temp += text[i];

            if (temp.size() == 2)
                break;
        }

        if (temp.size() == 2)
            std::cout << temp << '\n';
        else
            std::cout << "-1\n";
    }
}