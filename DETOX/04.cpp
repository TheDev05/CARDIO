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

        std::string result1, result2;
        for (int i = 0; i < text.size(); i++)
        {
            result1 += text[i];
            result2 += text[i];
        }

        reverse(result2.begin(), result2.end());
        std::cout << result1 << result2 << '\n';
    }
}