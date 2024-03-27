#include <bits/stdc++.h>
using namespace std;

void Merge(std::vector<int> &num, int left, int mid, int right)
{
    std::vector<int> temp;
    int idx1 = left, idx2 = mid + 1;

    while (idx1 <= mid && idx2 <= right)
    {
        if (num[idx1] < num[idx2])
            temp.push_back(num[idx1++]);
        else
            temp.push_back(num[idx2++]);
    }

    while (idx1 <= mid)
    {
        temp.push_back(num[idx1++]);1.c
    }

    while (idx2 <= right)
    {
        temp.push_back(num[idx2++]);
    }

    int idx = 0;
    for (int i = left; i <= right; i++)
    {
        num[i] = temp[idx++];
    }
}

void MergeSort(std::vector<int> &num, int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    MergeSort(num, left, mid);
    MergeSort(num, mid + 1, right);
    Merge(num, left, mid, right);

    return;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    MergeSort(num, 0, num.size() - 1);

    for (auto i : num)
        std::cout << i << " ";
}