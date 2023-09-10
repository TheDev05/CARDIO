#include <bits/stdc++.h>
using namespace std;

bool isPalin(std::string &text)
{
    for (int i = 0; i < text.size() / 2; i++)
    {
        if (text[i] != text[text.size() - 1 - i])
            return false;
    }

    return true;
}

bool traverse(int n, int i)
{
    std::string text;
    while (n)
    {
        if (n % i == 0)
            text += "0";
        else
            text += "1";

        n = n / i;
    }

    std::cout << text << '\n';
    return isPalin(text);
}

int main()
{
    int n;
    std::cin >> n;

    for (int i = 2; i <= n - 2; i++)
    {
        bool ok = traverse(n, i);
        if (!ok)
            std::cout << "false";
    }
}