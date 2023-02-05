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

    std::vector<int> storage(text.size() + 1, 0);
    
    storage[text.size()] = 1;
    for (int i = text.size() - 1; i >= 0; i--)
    {
        std::string temp;

        int val1 = 0;
        for (int j = i; j < text.size(); j++)
        {
            temp += text[j];
            if (temp.size() < 3 && stoi(temp) == 0)
                break;
            if (temp.size() < 3 && stoi(temp) < 27)
                val1 += storage[j + 1];
        }

        storage[i] = val1;
    }

    std::cout << storage[0];
}