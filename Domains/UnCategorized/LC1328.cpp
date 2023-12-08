#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    if (text.size() == 1)
        std::cout << "";

    bool ok = true;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] > 'a')
        {
            if ((text.size() & 1) && (i == (text.size() / 2))) {}
            else
            {
                text[i] = 'a', ok = false;
                break;
            }
        }
    }

    if (ok)
        text[text.size() - 1] = 'b';

    std::cout << text;
}