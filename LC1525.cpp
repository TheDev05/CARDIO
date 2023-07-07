#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::map<char, int> data, temp;
    for (auto i : text)
        data[i]++;

    int count = 0;
    for (int i = 0; i < text.size(); i++)
    {
        data[text[i]]--;
        temp[text[i]]--;

        if (data[text[i]]  == 0)
            data.erase(text[i]);

        if (data.size() == temp.size())
            count++;
    }

    std::cout << count;
}