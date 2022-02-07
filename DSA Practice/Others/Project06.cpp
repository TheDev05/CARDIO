#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string s;
    int k;

    std::cin >> s >> k;

    map<char, int> num;
    int index = 0, result = 0;

    for (int i = 0; i < s.size(); i++)
    {
        num[s[i]]++;

        if (num.size() > k)
        {
            while (num.size() > k)
            {
                num[s[index]]--;
                
                if (num[s[index]] == 0)
                {
                    num.erase(num.find(s[index]));
                }

                index++;
            }
        }

        if (num.size() == k)
        {
            result = std::max(result, (i - index) + 1);
        }
    }

    // return ((result == 0) ? -1 : result);
    std::cout << result;
}