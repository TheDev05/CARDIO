#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int k;
    std::cin >> k;

    for (int i = 0; i < text.size(); i++)
    {
        int temp = k;
        char left = text[i], right = text[i];

        char min1 = 'z';
        while (temp--)
        {
            min1 = std::min(min1, left);

            if (left == 'a')
                left = 'z';
            else
                left--;
        }

        char min2 = 'z';
        left = text[i], right = text[i];
        temp = k;

        while (temp--)
        {
            min2 = std::min(min2, right);

            if (right == 'z')
                right = 'a';
            else
                right++;
        }

        char inox = std::min(min1, min2);
        int val1 = std::abs(96 - (int)text[i]) % 27;
        int val2 = std::abs(96 - (int)inox) % 27;

        std::cout << std::abs(val1 - val2) % 26 << " ";

        // std::cout << std::abs((int)text[i] - (int)inox) << " ";

        // int min = INT_MAX;
        // for (char j = text[i]; j >= 'a'; j--)
        // {
        //     min = std::min(min, std::abs(std::abs(96 - (int)j) - std::abs(96 - (int)text[i])));
        // }

        // std::cout << min << '\n';
    }
}