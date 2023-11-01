#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(3, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][0] >> num[i][1] >> num[i][2];
    }

    std::vector<int> data(3, 0);
    for (auto &i : data)
        std::cin >> i;

    bool ok1 = false, ok2 = false, ok3 = false;
    for (int i = 0; i < num.size(); i++)
    {
        if (data[0] == num[i][0] && data[1] >= num[i][1] && data[2] >= num[i][2])
            ok1 = true;

        if (data[1] == num[i][1] && data[0] >= num[i][0] && data[2] >= num[i][2])
            ok2 = true;

        if (data[2] == num[i][2] && data[0] >= num[i][0] && data[1] >= num[i][1])
            ok3 = true;
    }

    std::cout << (ok1 & ok2 & ok3);
}
