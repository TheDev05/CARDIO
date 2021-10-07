#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Count all occurence of anagram: Rivison */

    std::string text, anag;
    std::cin >> text >> anag;

    map<char, int> dot1, dot2;

    for (int i = 0; i < anag.size(); i++)
    {
        dot1[anag[i]]++;
        dot2[anag[i]] = 0;
    }

    for (int i = 0; i < anag.size(); i++)
    {
        if (dot2.count(anag[i]))
        {
            dot2[anag[i]]++;
        }
    }

    int result = 0, index = 0;

    if (dot1 == dot2)
    {
        result++;
    }

    for (int i = anag.size(); i < text.size(); i++)
    {
        if (dot2.count(text[i]))
        {
            dot2[text[i]]++;
        }

        if (dot2.count(text[index]))
        {
            dot2[text[index]]--;
        }

        if (dot1 == dot2)
        {
            result++;
        }

        index++;
    }

    std::cout << result << '\n';
}