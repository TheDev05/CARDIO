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

    double sum = 0;
    for (auto i : num)
        sum += ceil((double)i / target);

    std::cout << ceil(sum);
}