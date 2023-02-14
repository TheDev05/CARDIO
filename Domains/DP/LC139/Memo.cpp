#include <bits/stdc++.h>
using namespace std;

int getCount(std::string text, std::vector<int> &storage, std::set<std::string> &data, int index)
{
    if (index >= text.size())
        return 1;

    if (storage[index] == -1)
    {
        std::string local;
        for (int i = index; i < text.size(); i++)
        {
            local += text[i];
            if (data.count(local))
            {
                if (getCount(text, storage, data, i + 1))
                    return 1;
            }
        }

        storage[index] = 0;
    }

    return storage[index];
}

int main()
{
    std::string text;
    std::cin >> text;

    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::set<std::string> data;
    for (auto i : num)
        data.insert(i);

    std::vector<int> storage(text.size(), -1);
    std::cout << getCount(text, storage, data, 0);
}