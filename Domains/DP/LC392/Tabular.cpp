#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text1, text2;
    std::cin >> text1 >> text2;

    std::vector<std::vector<int>> storage(text1.size() + 1, std::vector<int>(text2.size() + 1, 0));
    for (int i = 0; i < storage[0].size(); i++)
    {
        storage[storage.size() - 1][i] = 1;
    }

    for (int i = storage.size() - 2; i >= 0; i--)
    {
        int val = 0;
        for (int j = storage[0].size() - 2; j >= 0; j--)
        {
            if (text1[i] == text2[j])
            {
                val = storage[i + 1][j + 1];
            }
            else
            {
                val = storage[i][j + 1];
            }

            storage[i][j] = val;
        }
    }

    std::cout << storage[0][0];
}