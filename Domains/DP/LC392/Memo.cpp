#include <bits/stdc++.h>
using namespace std;

int getCount(std::string text1, std::string text2, std::vector<std::vector<int>> storage, int index1, int index2)
{
    if (index1 >= text1.size())
        return 1;
    if (index2 >= text2.size())
        return 0;

    if (storage[index1][index2] == -1)
    {
        if (text1[index1] == text2[index2])
        {
            if (getCount(text1, text2, storage, index1 + 1, index2 + 1))
                return 1;
        }
        else
        {
            if (getCount(text1, text2, storage, index1, index2 + 1))
                return 1;
        }

        storage[index1][index2] = 0;
    }

    return storage[index1][index2];
}

int main()
{
    std::string text1, text2;
    std::cin >> text1 >> text2;

    std::vector<std::vector<int>> storage(text1.size(), std::vector<int>(text2.size(), -1));
    std::cout << getCount(text1, text2, storage, 0, 0);
}