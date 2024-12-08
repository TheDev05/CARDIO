#include <bits/stdc++.h>
using namespace std;

bool isValid(std::vector<int> &num, int low, int high)
{
    for (int i = low; i < high; i++)
    {
        if (num[i] >= num[i + 1])
            return false;
    }

    return true;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int k;
    std::cin >> k;

    std::vector<int> res;
    std::map<int, int> data;

    int index = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (i < k)
            data[num[i]]++;
        else
        {
            data[num[i]]++;
            if (--data[num[index]] == 0)
                data.erase(num[index]);

            index++;
        }

        if ((i - index) + 1 == k)
        {
            if (isValid(num, index, i))
                res.push_back(data.rbegin()->first);
            else
                res.push_back(-1);
        }
    }

    for (auto i : res)
        std::cout << i << " ";
}