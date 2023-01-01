#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        std::string text;
        std::cin >> text;

        std::set<pair<char, char>> data;
        int sum = 0;

        data.insert({'E', 'W'});
        data.insert({'N', 'S'});
        data.insert({'W', 'E'});
        data.insert({'S', 'N'});

        for (int i = 0; i < text.size() - 1; i++)
        {
            if (data.count({text[i], text[i + 1]}))
            {
                int left = i, right = i + 1;
                while (left >= 0 && right < text.size() && data.count({text[left], text[right]}))
                {
                    text[left] = 'x';
                    text[right] = 'x';

                    left--;
                    right++;

                    sum += 6;
                }

                i = right - 1;
            }
        }

        for (int i = 0; i < text.size(); i++)
        {
            if (text[i] != 'x')
                sum += 5;
        }

        std::cout << sum << '\n';
    }
}