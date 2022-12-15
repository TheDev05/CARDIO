#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, a, b;
        std::cin >> n >> a >> b;

        std::string text1, text2;
        std::cin >> text1 >> text2;

        int count1 = 0, count2 = 0;
        for (int i = 0; i < text1.size(); i++)
        {
            if (text1[i] != text2[i])
                count1++;
        }

        for (int i = 0; i < text1.size() - 1; i++)
        {
            if (text1[i] != text2[i] && text1[i + 1] != text2[i + 1])
            {
                count2++;
                i++;
            }
        }

        if (count1 & 1)
        {
            std::cout << "-1\n";
            continue;
        }

        int val1 = ((count1 - (count2 * 2)) * b) + (count2 * a);
        int val2 = b * count1;

        std::cout << std::min(val1, val2) << '\n';
    }
}