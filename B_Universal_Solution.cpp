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

        int scount = 0, rcount = 0, pcount = 0;
        char inox;

        for (auto i : text)
        {
            if (i == 'S')
                scount++;
            if (i == 'P')
                pcount++;
            if (i == 'R')
                rcount++;
        }

        if (scount >= rcount && scount >= pcount)
            inox = 'R';
        else if (rcount >= scount && rcount >= pcount)
            inox = 'P';
        else
            inox = 'S';

        for (auto i : text)
            std::cout << inox;
        std::cout << '\n';
    }
}