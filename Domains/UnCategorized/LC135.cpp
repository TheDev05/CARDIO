#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> res(n, 1), left, right;
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (i - 1 >= 0 && num[i - 1] > num[i])
            left.push_back(i);
        if (i + 1 < n && num[i + 1] > num[i])
            right.push_back(i);
    }

    for (auto i : left)
        std::cout << i << " ";
    std::cout << '\n';

    for (int i = left.size() - 1; i >= 0; i--)
    {
        int index = left[i], count = res[index];
        while (index >= 0)
        {
            res[index] = count;
            if (index - 1 < 0 || num[index - 1] <= num[index])
                break;

            index--;
            count++;
        }
    }

    for (int i = 0; i < right.size(); i++)
    {
        int index = right[i], count = res[index];
        while (index < n && res[index] <= count)
        {
            res[index] = count;
            if (index + 1 >= n || num[index + 1] <= num[index])
                break;

            index++;
            count++;
        }
    }

    for (auto i : res)
        std::cout << i << " ";
    std::cout << '\n';

    int sum = 0;
    for (auto i : res)
        sum += i;

    std::cout << sum;
}