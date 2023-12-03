#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int target;
    std::cin >> target;

    std::map<int, int> data;
    for (auto i : num)
        data[i]++;

    int sum = 0, count = 0;
    for (int i = 1; i <= target; i++)
    {
        if (data.count(i) == false)
        {
            if (sum < i)
                count++;
        }

        if (data.contains(i))
            sum += i;
    }

    std::cout << count;
}