#include <bits/stdc++.h>
using namespace std;

bool read(int index1, int index2, std::vector<string> num)
{
    while (index2 < num[0].size() - 1)
    {
        if (num[index1][index2] == 'B')
        {
            bool ok = false;
            num[index1][index2] = 'W';

            if (index1 == 0)
            {
                if (num[index1 + 1][index2] == 'B' && num[index1][index2 + 1] == 'B')
                {
                    index1 = index1 + 1;
                }
                else if (num[index1][index2 + 1] == 'B')
                {
                    index2 = index2 + 1;
                }
                else if (num[index1 + 1][index2] == 'B')
                {
                    index1 = index1 + 1;
                }
                else
                    ok = true;
            }
            else
            {
                if (num[index1 - 1][index2] == 'B' && num[index1][index2 + 1] == 'B')
                {
                    index1 = index1 - 1;
                }
                else if (num[index1][index2 + 1] == 'B')
                {
                    index2 = index2 + 1;
                }
                else if (num[index1 - 1][index2] == 'B')
                {
                    index1 = index1 - 1;
                }
                else
                    ok = true;
            }

            if (ok)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<string> num(2);
        std::cin >> num[0] >> num[1];

        bool ok = false;
        if (num[0][0] == 'B')
            ok |= read(0, 0, num);
        if (num[1][0] == 'B')
            ok |= read(1, 0, num);

        if (ok)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
}