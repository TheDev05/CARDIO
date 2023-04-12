#include <bits/stdc++.h>
using namespace std;

int traverse(std::string text, std::string temp, std::set<std::string> &result, std::set<int> &data, int index)
{
    for (int i = 0; i < text.size(); i++)
    {
        if (data.count(i) == false)
        {
            temp += text[i];
            data.insert(i);

            traverse(text, temp, result, data, i);

            temp.pop_back();
            data.erase(i);
        }
    }

    result.insert(temp);
    return 0;
}

int main()
{
    std::string text, temp;
    std::cin >> text;

    std::string temp;

    std::set<int> data;
    std::set<std::string> result;

    traverse(text, temp, result, data, 0);
    std::cout << result.size() - 1;
}