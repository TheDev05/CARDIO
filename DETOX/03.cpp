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

        std::map<char, int> data;
        char inox = 'a';

        for (int i = 0; i < 26; i++)
        {
            data[inox] = i + 1;
            inox++;
        }

        int max = 1;
        for (int i = 0; i < text.size(); i++)
        {
            max = std::max(max, data[text[i]]);
        }

        std::cout << max << '\n';
    }
}