#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::vector<std::vector<int>> storage(text.size(), std::vector<int>(text.size(), -1));

    int index1 = 0, index2 = 0;
    for (int i = 0; i < text.size(); i++)
    {
        int row = 0, col = i;
        while (row < text.size() && col < text.size())
        {
            bool ok = true;

            if (text[row] != text[col])
                ok = false;
            if (row > text.size() - 1 && col > 0 && storage[row - 1][col - 1] != 1)
                ok = false;

            if (ok)
            {
                storage[row][col] = 1;

                index1 = row;
                index2 = col;
            }

            row++;
            col++;
        }
    }

    for (auto i : storage)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }

    std::string temp, result;
    while (index1 < text.size() && index2 >= 0)
    {
        if (storage[index1][index2] == 1)
            temp += text[index1];
        else
            break;

        index1++;
        index2--;
    }

    std::cout << temp;
    std::cout << index1 << " " << index2;

    if ((index1 + index2) & 1)
    {
        result += temp[temp.size() - 1];
        result += temp[temp.size() - 1];
    }
    else
        result += temp[temp.size() - 1];

    for (int i = temp.size() - 2; i >= 0; i--)
    {
        result.insert(0, 1, temp[i]);
        result.insert(result.size(), 1, temp[i]);
    }

    std::cout << result;
}