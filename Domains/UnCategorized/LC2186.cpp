#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text1, text2;
    std::cin >> text1 >> text2;

    std::vector<int> data(26, 0);
    for (int i = 0; i < text1.size(); i++)
    {
        data[(int)text1[i] - (int)'a']++;
    }

    int sum = 0;
    for (int i = 0; i < text2.size(); i++)
    {
        if (data[(int)text2[i] - (int)'a'] > 0)
            data[(int)text2[i] - (int)'a']--;
        else
            sum++;
    }

    sum += accumulate(begin(data), end(data), 0);
    std::cout << sum;
}