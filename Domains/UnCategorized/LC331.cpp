#include <bits/stdc++.h>
using namespace std;

void traverse(std::vector<std::string> &num, int &index)
{
    if (index >= num.size())
        return;

    if (num[index] == "#")
        return;

    for (int i = 0; i < 2; i++)
    {
        index = index + 1;
        traverse(num, index);
    }
}

int main()
{
    std::string text;
    std::cin >> text;

    // 9 3 4 # # 1 # # 2 # 6 # #

    std::vector<std::string> num;

    std::string temp;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ',')
        {
            num.push_back(temp);
            temp.clear();
        }
        else
            temp += text[i];

        if (i == text.size() - 1)
            num.push_back(temp);
    }


    int index = 0;
    traverse(num, index);

    std::cout << index;
}