#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> pos, neg, res;
    for (auto i : num)
        if (i > 0)
            pos.push_back(i);
        else
            neg.push_back(i);

    reverse(begin(pos), end(pos));
    reverse(begin(neg), end(neg));

    res.push_back(pos.back());
    pos.pop_back();

    while (pos.size() || neg.size())
    {
        if (res.back() > 0)
        {
            if (neg.size())
                res.push_back(neg.back()),
                    neg.pop_back();
        }
        else if (pos.size())
            res.push_back(pos.back()),
                pos.pop_back();
    }

    for (int i = 0; i < res.size(); i++)
    {
        std::cout << res[i] << " ";
    }
}