#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    sort(num.begin(), num.end());

    int count = 0;
    std::set<int> data;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (data.count(j) == false && num[i] < num[j])
            {
                count++;
                data.insert(j);

                break;
            }
        }
    }

    std::cout << count;
}