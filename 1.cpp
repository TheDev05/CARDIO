#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::string vowel = "aeiou";

    std::map<char, int> data;
    char inox = 'a';

    for (int i = 0; i < 27; i++)
    {
        data[inox] = i;
        inox++;
    }

    std::set<char> vow;
    int cons = 0;

    for (auto i : text)
    {
        if (vowel.find(i) == std::string::npos)
            cons++;
        else
            vow.insert(i);
    }

    // if (vow.size() == 1 && cons == 0)
    //     return -1;

    int min = INT_MAX;
    for (int i = 0; i < vowel.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < text.size(); j++)
        {
            if (vow.count(text[j]))
            {
                sum += abs(data[text[j]] - data[vowel[i]]);
            }
        }

        min = std::min(sum, min);
    }

    std::cout << (cons * 10) + min;
}