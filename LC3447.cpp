#include <bits/stdc++.h>
using namespace std;

int divisor(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return i;
    }

    return n;
}

int prime(int n, std::vector<int> &store)
{
    while (1)
    {
        int temp = divisor(n);
        store.push_back(temp);

        if (temp == n)
            break;

        n = n / temp;
    }
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int m;
    std::cin >> m;

    std::vector<int> elem(m);
    for (auto &i : elem)
        std::cin >> i;

    // std::vector<int> store;
    // prime(4, store);

    // for (auto i : store)
    // {
    //     std::cout << i << " ";
    // }

    std::map<int, int> data;
    for (int i = 0; i < elem.size(); i++)
    {
        int val = elem[i];
        while (1)
        {
            int temp = divisor(val);
            if (data.count(temp))
                data[temp] = std::min(data[temp], i);
            else
                data[temp] = i;

            if (temp == val)
                break;

            val = val / temp;
        }

        if (val == 1)
        {
            if (data.count(val) == false)
                data[val] = std::min(data[val], i);
            else
                data[val] = i;
        }
    }

    std::vector<int> result;
    for (int i = 0; i < num.size(); i++)
    {
        int val = num[i];
        int idx = INT_MAX;

        while (1)
        {
            int temp = divisor(val);
            if (data.count(temp))
                idx = std::min(data[temp], idx);

            if (temp == val)
                break;

            val = val / temp;
        }

        if (data.count(1))
            idx = std::min(idx, data[1]);

        if (idx == INT_MAX)
            idx = -1;

        result.push_back(idx);
    }

    // for (auto i : data)
    //     std::cout << i.first << " " << i.second << '\n';

    // std::cout << '\n';

    for (auto i : result)
        std::cout << i << " ";
}