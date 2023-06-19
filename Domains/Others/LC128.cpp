#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::set<int> st;
    for (auto i : num)
        st.insert(i);

    int max = 0, last = 0;

    // for (auto i : st)
    //     std::cout << i << " ";
    // std::cout << '\n';

    for (auto i = st.begin(); i != st.end(); i++)
    {
        int count = 1;
        if (i != st.begin())
        {
            while (i != st.end() && std::abs(*i - last) == 1)
            {
                count++;
                last = *i;

                i++;
            }
        }

        last = *i;

        max = std::max(max, count);
        if (i == st.end())
            break;
    }

    std::cout << max;
}