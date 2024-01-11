#include <bits/stdc++.h>
using namespace std;

void mergeThem(std::vector<int> &num, int left, int mid, int right)
{
    std::vector<int> temp;

    int a = left, b = mid + 1;
    while (a <= mid && b <= right)
    {
        if (num[a] < num[b])
            temp.push_back(num[a++]);
        else if (num[a] > num[b])
            temp.push_back(num[b++]);
        else
            temp.push_back(num[a++]),
                temp.push_back(num[b++]);
    }

    while (a <= mid)
        temp.push_back(num[a]), a++;

    while (b <= right)
        temp.push_back(num[b]), b++;

    int index = 0;
    for (int i = left; i <= right; i++)
        num[i] = temp[index++];
}

void traverse(std::vector<int> &num, int left, int right)
{
    if (left == right)
        return;

    int mid = (right + left) / 2;

    traverse(num, left, mid);
    traverse(num, mid + 1, right);

    mergeThem(num, left, mid, right);
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    traverse(num, 0, num.size() - 1);

    for (auto i : num)
        std::cout << i << " ";
}