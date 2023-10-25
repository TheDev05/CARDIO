#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::stack<std::pair<char, int>> data;
    std::vector<int> idx;

    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == '[')
            data.push({text[i], i});
        else
        {
            if (data.empty())
                idx.push_back(i);
            else
                data.pop();
        }
    }

    while (data.size())
    {
        idx.push_back(data.top().second);
        data.pop();
    }

    sort(begin(idx), end(idx));
    std::string temp;

    for (auto i : idx)
        temp += text[i];

    int sum = 0, res = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        int index = i, count = 0;
        while (temp[i] == temp[index] && index < temp.size())
        {
            count++;
            index++;
        }

        res += count / 2;
        if (count & 1)
            sum++;

        i = index - 1;
    }

    std::cout << (res / 2) + (sum / 2);
}