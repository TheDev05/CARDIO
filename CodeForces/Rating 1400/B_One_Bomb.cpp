#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, inox = 0;
    std::cin >> n >> m;

    std::vector<string> num;
    for (int i = 0; i < n; i++)
    {
        std::string temp;
        std::cin >> temp;

        num.push_back(temp);
    }

    map<int, int> row, col;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (num[i][j] == '*')
            {
                count++;
                inox++;
            }
        }

        row[i] = count;
    }

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (num[j][i] == '*')
                count++;
        }

        col[i] = count;
    }

    bool ok = false;
    int index1 = 0, index2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = row[i] + col[j];
            if (num[i][j] == '*')
                sum--;

            if (sum == inox)
            {
                ok = true;

                index1 = i;
                index2 = j;

                break;
            }
        }
    }

    if (inox == 0)
    {
        ok = true;
    }

    if (ok)
    {
        std::cout << "YES\n";
        std::cout << index1 + 1 << " " << index2 + 1 << '\n';
    }
    else
        std::cout << "NO\n";
}