#include <bits/stdc++.h>
using namespace std;

int getCount(std::string &text, std::vector<int> &storage, int index)
{
    if (index >= text.size())
        return 1;

    if (storage[index] == -1)
    {
        std::string temp;

        int val1 = 0;
        for (int i = index; i < text.size(); i++)
        {
            temp += text[i];
            if (temp.size() < 3 && stoi(temp) == 0)
                return 0;
            if (temp.size() < 3 && stoi(temp) < 27)
                val1 += getCount(text, storage, i + 1);
        }

        storage[index] = val1;
    }

    return storage[index];
}

int main()
{
    std::string text;
    std::cin >> text;

    std::vector<int> storage(text.size(), -1);
    std::cout << getCount(text, storage, 0);
}