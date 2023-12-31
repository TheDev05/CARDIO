#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::map<char, std::vector<int>> data;
    for (int i = 0; i < text.size(); i++)
    {
        int index = i, count = 0;
        while (index < text.size() && text[index] == text[i])
            index++, count++;

        data[text[i]].push_back(count);
        i = index - 1;
    }

    // for (auto i : data)
    // {
    //     std::cout << i.first << ": ";
    //     for (auto j : i.second)
    //         std::cout << j.first << " " << j.second;
    //     std::cout << '\n';
    // }

    std::map<char, std::map<int, int>> inox;
    for (auto i : data)
    {
        int count = 0, min = INT_MAX, max = INT_MIN;
        bool ok = false;

        for (auto j : i.second)
        {
            for (int k = 0; k < 3; k++)
            {
                int delta = j - k;
                if (delta > 0)
                    inox[i.first][delta] += (k + 1);
            }
        }
    }

    int res = -1;
    for (auto i : inox)
    {
        for (auto j : i.second)
            if (j.second >= 3)
                res = std::max(res, j.first);
    }

    std::cout << res;
}
