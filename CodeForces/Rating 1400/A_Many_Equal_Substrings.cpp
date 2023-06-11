#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::string text;
    std::cin >> text;

    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (text[i] == text[0])
        {
            int index1 = i, index2 = 0, count = 0;
            while (index1 < n && index2 < n)
            {
                if (text[index1] == text[index2])
                    count++;
                else
                    break;

                index1++;
                index2++;
            }

            if (index1 == n)
                max = std::max(max, count);
        }
    }

    std::string temp;
    for (int i = max; i < n; i++)
    {
        temp += text[i];
    }

    std::cout << text;
    for (int i = 0; i < k - 1; i++)
    {
        std::cout << temp;
    }
}