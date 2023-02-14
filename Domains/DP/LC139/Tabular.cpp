#include <bits/stdc++.h>
using namespace std;

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

    std::vector<int> storage(text.size() + 1, 0);
    storage[storage.size() - 1] = 1;

    for (int i = storage.size() - 2; i >= 0; i--)
    {
        std::string local;
        int val = 0;

        for (int j = i; j < text.size(); j++)
        {
            local += text[j];
            if (data.count(local))
            {
                if (storage[j + 1])
                    val = 1;
            }
        }

        storage[i] = val;
    }

    std::cout << storage[0];
}