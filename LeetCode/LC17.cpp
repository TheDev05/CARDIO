#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::string> &num, std::string temp, std::vector<std::string> &result, int index)
{
    if (index >= num.size())
    {
        result.push_back(temp);
        return 0;
    }

    for (int i = 0; i < num[index].size(); i++)
    {
        getCount(num, temp + num[index][i], result, index + 1);
    }

    return 0;
}

int main()
{
    std::string text;
    std::cin >> text;

    std::map<int, std::string> data;

    data['2'] = "abc";
    data['3'] = "def";
    data['4'] = "ghi";
    data['5'] = "jkl";
    data['6'] = "mno";
    data['7'] = "pqrs";
    data['8'] = "tuv";
    data['9'] = "wxyz";

    std::vector<std::string> num, result;
    for (auto i : text)
        num.push_back(data[i]);

    std::string temp;
    getCount(num, temp, result, 0);

    for (auto i : result)
        std::cout << i << " ";
}