#include <bits/stdc++.h>
using namespace std;

void selectionSort(std::vector<int> &num)
{
    for (int i = 0; i < num.size(); i++)
    {
        int min = num[i], index = i;
        for (int j = i; j < num.size(); j++)
        {
            if (num[j] < min)
                min = num[j], index = j;
        }

        swap(num[i], num[index]);
    }
}

// TC : O(N^2)

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    selectionSort(num);

    for (auto i : num)
        std::cout << i << " ";
}