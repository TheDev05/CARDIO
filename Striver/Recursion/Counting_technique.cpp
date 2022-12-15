// Counting Techniue

#include <bits/stdc++.h>
using namespace std;

int countSub(std::vector<int> num, int index, int sum, int k)
{
    if (index >= num.size())
    {
        if (sum == k)
            return (1);
        else
            return (0);
    }

    sum += num[index];
    int left = countSub(num, index + 1, sum, k);

    sum -= num[index];
    int right = countSub(num, index + 1, sum, k);

    return (left + right);
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> num(n);
    std::iota(num.begin(), num.end(), 1);

    std::cout << countSub(num, 0, 0, k);
}