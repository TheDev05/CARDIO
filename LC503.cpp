#include <bits/stdc++.h>
using namespace std;

int thedev05()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::stack<int> data;
    std::vector<int> res;

    for (int i = 0; i < num.size(); i++)
    {
        data.push(num[num.size() - 1 - i]);
    }

    for (int i = num.size() - 1; i >= 0; i--)
    {
        while (data.size() && data.top() <= num[i])
        {
            data.pop();
        }

        // if (data.size())
        //     std::cout << data.top() << " ";

        if (data.size())
            res.push_back(data.top());
        else
            res.push_back(-1);

        data.push(num[i]);
    }

    reverse(begin(res), end(res));

    for (auto i : res)
        std::cout << i << " ";

    return 0;
}

int main()
{
    std::cout << thedev05();
}