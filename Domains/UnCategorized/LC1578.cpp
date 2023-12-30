#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int sum = 0;
    for (int i = 0; i < text.size(); i++)
    {
        int index = i, max = data[index], temp = 0;
        while (index < text.size() && text[index] == text[i])
            temp += data[index], max = std::max(max, data[index]), index++;

        sum += (temp - max);
        i = index - 1;
    }

    std::cout << sum;
}