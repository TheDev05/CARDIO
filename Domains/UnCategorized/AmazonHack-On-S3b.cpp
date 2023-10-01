#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    text[text.size() - 1] = 'c';

    bool ok = true;
    for (int i = 0; i < text.size() / 2; i++)
    {
        if (text[i] != text[text.size() - 1 - i])
            ok = false;
    }

    if (ok)
    {
        std::cout << "0";
        return 0;
    }

    int count = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] != text[0])
            break;

        count++;
    }

    std::cout << text.size() - count;
}