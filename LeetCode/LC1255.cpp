#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::string> &num, int sum, int &count, std::map<char, int> &exist, std::map<char, int> &data, int index)
{
    if (index >= num.size())
    {
        count = std::max(count, sum);
        return 0;
    }

    std::map<char, int> temp;
    for (auto i : num[index])
        temp[i]++;

    bool ok = true;
    for (int i = 0; i < num[index].size(); i++)
    {
        if (exist[num[index][i]] < temp[num[index][i]])
            ok = false;
    }

    if (ok)
    {
        for (int i = 0; i < num[index].size(); i++)
        {
            sum += data[num[index][i]];
            exist[num[index][i]]--;

            if (exist[num[index][i]] == 0)
                exist.erase(num[index][i]);
        }

        getCount(num, sum, count, exist, data, index + 1);

        for (int i = 0; i < num[index].size(); i++)
        {
            sum -= data[num[index][i]];
            exist[num[index][i]]++;
        }
    }

    getCount(num, sum, count, exist, data, index + 1);
    return 0;
}

int main()
{
    std::vector<std::string> words({"dog", "cat", "dad", "good"});
    std::vector<char> letters({'a', 'a', 'c', 'd', 'd', 'd', 'g', 'o', 'o'});
    std::vector<int> score({1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0});

    std::map<char, int> data;
    std::map<char, int> exist;

    char inox = 'a';
    for (auto i : score)
    {
        data[inox] = i;
        inox++;
    }

    for (auto i : letters)
        exist[i]++;

    int count = 0;
    getCount(words, 0, count, exist, data, 0);

    std::cout << count << '\n';
}