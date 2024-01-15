#include <bits/stdc++.h>
using namespace std;

bool traverse(std::map<char, int> &data1, std::map<char, int> &data2)
{
    for (auto i : data1)
        if (data2.contains(i.first) == false)
            return false;

    for (auto i : data2)
        if (data1.contains(i.first) == false)
            return false;

    std::map<int, int> temp1, temp2;
    for (auto i : data1)
        temp1[i.second]++;

    for (auto i : data2)
        temp2[i.second]++;

    if (temp1 != temp2)
        return false;

    return true;
}

int main()
{
    std::string text1, text2;
    std::cin >> text1 >> text2;

    std::map<char, int> data1, data2;

    for (auto i : text1)
        data1[i]++;

    for (auto i : text2)
        data2[i]++;

    std::cout << traverse(data1, data2);
}