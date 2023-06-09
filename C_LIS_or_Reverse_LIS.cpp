#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::deque<int> num1(n), num2, result;
        std::map<int, int> data;

        for (auto &i : num1)
        {
            std::cin >> i;
            data[i]++;
        }

        num2 = num1;
        std::sort(num1.begin(), num1.end());

        int temp = num1.back();

        result.push_back(num1.back());
        num1.pop_back();

        bool ok = true;
        while (num1.size())
        {
            int left = result.front();
            int right = result.back();

            if (ok && num1.back() < left)
            {
                result.push_front(num1.back());
                ok = false;
            }
            else if (ok == false && num1.back() < right)
            {
                result.push_back(num1.back());
                ok = true;
            }

            num1.pop_back();
        }

        if (data[temp] > 1)
            result.push_front(temp);

        int val1 = ceil((double)result.size() / 2);
        result.clear();

        std::sort(num2.begin(), num2.end(), greater<int>());

        temp = num2.back();

        result.push_back(num2.back());
        num2.pop_back();

        ok = true;
        while (num2.size())
        {
            int left = result.front();
            int right = result.back();

            if (ok && num2.back() > left)
            {
                result.push_front(num2.back());
                ok = false;
            }
            else if (ok == false && num2.back() > right)
            {
                result.push_back(num2.back());
                ok = true;
            }

            num2.pop_back();
        }

        if (data[temp] > 1)
            result.push_back(temp);

        int val2 = ceil((double)result.size() / 2);
        std::cout << std::max(val1, val2) << '\n';
    }
}