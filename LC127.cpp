#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string start, end;
    std::cin >> start >> end;

    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::unordered_map<std::string, int> res1;
    std::unordered_map<int, std::string> res2;

    for (int i = 0; i < num.size(); i++)
    {
        res1[num[i]] = i;
        res2[i] = num[i];
    }

    std::set<std::string> data;
    std::queue<std::string> inox;
    std::vector<std::vector<int>> result;

    inox.push(start);

    for (auto i : num)
        data.insert(i);

    int count = 0, max = 0;
    while (inox.size())
    {
        int size = inox.size();
        count++;

        std::vector<int> temp;
        for (int idx = 0; idx < size; idx++)
        {
            std::string text = inox.front();
            temp.push_back(res1[text]);

            data.erase(text);
            inox.pop();

            if (text == end)
                return count;

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
                        inox.push(temp);
                }
            }
        }

        result.push_back(temp);
        max = std::max(max, temp.size());
    }

    std::vector<std::vector<std::string>> dash;
    traverse(res2, result, dash);

    /*
    
    */

    std::cout << count;
}