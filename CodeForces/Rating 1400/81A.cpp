
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int n = text.size();
    map<int, char> data;

    for (int i = 0; i < n; i++)
    {
        data[i] = text[i];
    }

    for (int i = 1; i < n; i++)
    {
        auto it = data.find(i);
        int index1, index2;
        char left, right;

        right = it->second;
        index1 = it->first;

        if (it != data.begin())
        {
            it--;

            left = it->second;
            index2 = it->first;

            if (left == right)
            {
                data.erase(index1);
                data.erase(index2);
            }
        }
    }

    for (auto i : data)
        std::cout << i.second;
}