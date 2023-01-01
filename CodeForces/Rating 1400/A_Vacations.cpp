#include <bits/stdc++.h>
using namespace std;

int fillStore(std::vector<string> &num, std::vector<int> &store, int index, int counter)
{
    for (auto i : store)
        std::cout << i << " ";
    std::cout << "\n";

    if (index >= num.size())
        return 0;

    if (num[index] == "00")
        store[index] = 0;

    if (store[index] == -1)
    {
        int max = 0;
        for (int i = index + 1; i < num.size(); i++)
        {
            if (num[i][counter] == '1')
            {
                counter = (counter == 0) ? 1 : 0;
                max = std::max(max, 1 + fillStore(num, store, i, counter));
                counter = (counter == 0) ? 1 : 0;
            }
        }

        store[index] = max;
    }

    return store[index];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> store(n, -1);
    map<int, string> inox;
    std::vector<string> num;

    inox[0] = "00";
    inox[1] = "01";
    inox[2] = "10";
    inox[3] = "11";

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;

        num.push_back(inox[temp]);
    }

    // 01 11 10 00

    for (auto i : num)
        std::cout << i << " ";
    std::cout << "\n";

    if (num[0][0] == '1')
        fillStore(num, store, 0, 0);
    if (num[0][1] == '1')
        fillStore(num, store, 0, 1);

    for (auto i : store)
        std::cout << i << " ";
}