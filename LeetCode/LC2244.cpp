#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::map<int, int> freq;
    for (auto i : num)
        freq[i]++;

    int count = 0;
    while (1)
    {
        int temp = count;
        for (auto &i : freq)
        {
            if (i.second > 0)
            {
                if (i.second % 3 == 0)
                {
                    count += i.second / 3;
                    i.second = 0;
                }

                if (i.second > 1 && i.second & 1)
                {
                    i.second = i.second - 3;
                    count++;
                }

                if (i.second > 0 && !(i.second & 1))
                {
                    i.second = i.second - 2;
                    count++;
                }
            }
        }

        if (temp == count)
        {
            break;
        }
    }

    for (auto i : freq)
        if (i.second > 0)
            count = -1;

    std::cout << count << '\n';
}