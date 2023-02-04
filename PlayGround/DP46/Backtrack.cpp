#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::map<int, int> &data, int count, int prevIndex, int index)
{
    if (index >= num.size())
    {
        data[count]++;
        return 0;
    }

    if (prevIndex == 0 || num[index] > num[prevIndex - 1])
        getCount(num, data, count + 1, index + 1, index + 1);
    getCount(num, data, count, prevIndex, index + 1);

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    // std::map<int, int> data;
    // getCount(num, data, 0, 0, 0);

    // auto it = data.end();
    // it--;

    // std::cout << it->second;

    std::vector<int> storage(num.size(), 1);
    std::map<int, int> local;

    int result = 1;
    for (int i = 0; i < num.size(); i++)
    {
        int max = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (num[j] < num[i])
                max = std::max(max, storage[j]);
        }

        storage[i] = 1 + max;
        result = std::max(result, storage[i]);
    }

    int max = 0;
    while (result)
    {
        int count = 0;
        for (int i = 0; i < storage.size(); i++)
        {
            if (storage[i] == result)
                count++;
        }
        max = std::max(max, count);
        result--;
    }

    std::cout << max;

}