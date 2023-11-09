#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int count = num.size();
    for (int i = 0; i < num.size(); i++)
    {
        if (count == 0)
            break;

        if (num[i] == 0)
        {
            num.erase(num.begin() + i);
            num.insert(num.begin(), 0);
        }
        else if (num[i] == 2)
        {
            num.erase(num.begin() + i);
            num.insert(num.end(), 2);

            i--;
        }

        count--;
    }

    for (auto i : num)
        std::cout << i << " ";
}