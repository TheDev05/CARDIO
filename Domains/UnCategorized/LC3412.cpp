#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int alpha = 'a';
    std::map<int, char> data;

    for (int i = 0; i < 26; i++)
    {
        data[i] = alpha;
        alpha++;
    }

    std::map<char, std::set<int>> num;

    int sum = 0;
    for (int i = 0; i < text.size(); i++)
    {
        int temp = (int)text[i] - 97;
        int temp1 = 25 - temp;

        char letter = data[temp1];

        if (num.contains(letter) && num[letter].size())
        {
            auto it = num[letter].begin();

            num[letter].erase(*it);
            num[text[i]].erase(i);

            if (num[letter].empty())
                num.erase(letter);
            if (num[text[i]].empty())
                num.erase(text[i]);
        }
        else

            num[text[i]].insert(i);
    }

    std::cout << sum;
}