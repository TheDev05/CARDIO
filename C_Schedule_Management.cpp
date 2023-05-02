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

        std::set<int> locate;
        std::map<int, int> data;

        std::vector<int> num(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];

            locate.insert(num[i]);
            data[num[i]]++;
        }

        int remain = n - locate.size(), inox = 1;
        for (auto it = data.begin(); it != data.end(); it++)
        {
            if (it->second >= 2)
            {
                inox = inox + 2;
                data[it->second] -= 2;

                for (auto j = it; j != data.end(); j++)
                {
                    if (j->first != it->first)
                    {
                        if (j->second >= 2)
                            data[j->first] -= 2;
                        else
                            data[j->first] = 0;
                    }

                    if (remain < j->second)
                    {
                        data[j->first] -= remain;
                        remain = 0;
                    }
                    else
                    {
                        remain -= data[j->first];
                        data[j->first] = 0;
                    }
                }
            }
            else
                data[it->first] = 0;
        }

        std::cout << inox << '\n';
    }
}