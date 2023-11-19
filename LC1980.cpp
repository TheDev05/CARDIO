#include <bits/stdc++.h>
using namespace std;

std::string traverse(std::set<std::string> &exist, std::string temp)
{
    if (temp.size() == exist.size())
    {
        if (exist.contains(temp) == false)
            return temp;

        return "";
    }

    temp += "0";
    std::string res1 = traverse(exist, temp);
    temp.erase(temp.size() - 1);

    temp += "1";
    std::string res2 = traverse(exist, temp);
    temp.erase(temp.size() - 1);

    return (res1.empty()) ? res2 : res1;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::set<std::string> exist;
    for (auto i : num)
        exist.insert(i);

    std::cout << traverse(exist, "");
}