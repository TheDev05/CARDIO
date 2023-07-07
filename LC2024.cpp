#include <bits/stdc++.h>
using namespace std;

int read(std::string text, int k, char inox)
{
    int truth = 0, falsy = 0, max = 0, index = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == 'T')
            truth++;
        else
            falsy++;

        if (inox == 'F')
        {
            while (truth > k)
            {
                if (text[index] == 'F')
                    falsy--;
                else
                    truth--;

                index++;
            }
        }
        else
        {
            while (falsy > k)
            {
                if (text[index] == 'F')
                    falsy--;
                else
                    truth--;

                index++;
            }
        }

        max = std::max(max, (i - index) + 1);
    }

    return max;
}

int main()
{
    std::string text;
    std::cin >> text;

    int k;
    std::cin >> k;

    int truth = 0, falsy = 0;
    int max = 0, index = 0;

    max = std::max(max, read(text, k, 'F'));
    max = std::max(max, read(text, k, 'T'));

    std::cout << max;
}