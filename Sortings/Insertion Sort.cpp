#include <bits/stdc++.h>
using namespace std;

void insertionSort(std::vector<int> &num)
{
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (num[j] < num[j - 1])
                swap(num[j], num[j - 1]);
            else
                break;
        }
    }
}

// TC : O(N^2) | O(N)

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    insertionSort(num);

    for (auto i : num)
        std::cout << i << " ";
}