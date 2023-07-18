#include <bits/stdc++.h>
using namespace std;

void check(std::set<std::string> &text, std::queue<std::string> &qt, std::string temp, std::set<std::string> &skip)
{
    for (auto j : text)
    {
        if (j.size() == temp.size() && skip.count(j) == false)
        {
            int count = 0;
            for (int i = 0; i < temp.size(); i++)
            {
                if (j[i] != temp[i])
                    count++;
            }

            if (count == 1)
            {
                qt.push(j);
                skip.insert(j);
            }
        }
    }
}

int main()
{
    std::string start, last;
    std::cin >> start >> last;

    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    bool flag = true;

    for (auto &i : num)
    {
        std::cin >> i;
    }

    std::map<std::string, std::vector<std::string>> data;
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num.size(); j++)
        {
            if (i != j && num[i].size() == num[j].size())
            {
                int count = 0;
                for (int k = 0; k < num[i].size(); k++)
                {
                    if (num[i][k] != num[j][k])
                        count++;
                }

                if (count == 1)
                    data[num[i]].push_back(num[j]);
            }
        }
    }

    for (auto i : data)
    {
        std::cout << i.first << ": ";
        for (auto j : i.second)
            std::cout << j << " ";
        std::cout << '\n';
    }

    std::set<std::string> skip;
    std::queue<std::string> qt;

    qt.push(start);
    skip.insert(start);

    // int count = 0;
    // bool ok = false;

    // while (qt.size())
    // {
    //     int size = qt.size();
    //     count++;

    //     for (int i = 0; i < size; i++)
    //     {
    //         std::string temp = qt.front();

    //         qt.pop();
    //         text.erase(temp);

    //         if (temp == last)
    //         {
    //             ok = true;
    //             break;
    //         }

    //         check(text, qt, temp, skip);
    //     }

    //     std::cout << '\n';

    //     if (ok)
    //         break;
    // }

    // if (!ok)
    //     count = 0;

    // std::cout << count;
}