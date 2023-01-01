#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> num;

        int temp = n;
        int inox = 1;

        while (num.size() != temp)
        {
            num.push_back(n);
            if (num.size() < temp)
                num.push_back((temp + 1) - n);

            inox++;
            n--;
        }

        for (auto i : num)
            std::cout << i << " ";
    }
}