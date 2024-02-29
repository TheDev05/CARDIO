#include <bits/stdc++.h>
using namespace std;

void traverse(std::unordered_map<int, std::string> &res2, std::vector<std::vector<int>> &result, std::vector<std::vector<std::string>> &dash, std::vector<std::string> temp, int idx)
{
    if (idx >= result.size())
    {
        dash.push_back(temp);
        return;
    }

    for (int i = 0; i < result[idx].size(); i++)
    {
        temp.push_back(res2[result[idx][i]]);
        traverse(res2, result, dash, temp, idx + 1);
        temp.pop_back();
    }
}

int main()
{
    std::string start, end;
    std::cin >> start >> end;

    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::unordered_set<std::string> data;
    std::queue<std::string> inox;

    inox.push(start);

    for (auto i : num)
        data.insert(i);

    int ans = 0;
    while (inox.size())
    {
        int size = inox.size();
        ans++;

        for (int idx = 0; idx < size; idx++)
        {
            std::string text = inox.front();
            inox.pop();

            if (text == end)
                return ans;

            std::unordered_set<std::string> store;
            for (auto it = data.begin(); it != data.end(); it++)
            {
                std::string temp = *it;
                if (temp.size() == text.size())
                {
                    int count = 0;
                    for (int j = 0; j < text.size(); j++)
                        if (text[j] != temp[j])
                            count++;

                    if (count == 1)
                        inox.push(temp),
                            store.insert(temp);
                }
            }

            for (auto i : store)
                data.erase(i);
        }
    }
}