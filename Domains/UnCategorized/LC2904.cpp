#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    int n;
    std::cin >> n;

    int count = 0;
    std::deque<char> temp, res;

    for (int i = 0; i < text.size(); i++)
    {
        temp.push_back(text[i]);
        if (text[i] == '1')
            count++;

        while (count >= n)
        {
            if (count == n)
            {
                if (res.empty() || res.size() > temp.size())
                    res = temp;
                else if (res.size() == temp.size())
                {
                    bool ok = true;
                    for (int j = 0; j < std::min(res.size(), temp.size()); j++)
                    {
                        if (res[j] > temp[j])
                        {
                            res = temp;
                            ok = false;

                            break;
                        }
                        else if (res[j] < temp[j])
                            break;
                    }
                }
            }

            if (temp.front() == '1')
                count--;
            temp.pop_front();
        }
    }

    std::string result;
    for (auto i : res)
        result += i;

    std::cout << result;
}