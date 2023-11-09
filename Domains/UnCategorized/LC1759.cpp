#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int mod = 1e9 + 7, sum = 0;
    for (int i = 0; i < text.size(); i++)
    {
        int index = i, count = 0;
        while (index < text.size() && text[i] == text[index])
        {
            index++, count++;
        }

        sum += ((count * (count + 1)) / 2) % mod;
    }

    std::cout << sum;
}