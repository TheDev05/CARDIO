#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::stack<std::pair<int, int>> st;
    std::vector<int> res(num.size(), 0);

    for (int i = 0; i < num.size(); i++)
    {
        if (st.empty())
            st.push({num[i], i});
        else
        {
            while (st.size() && st.top().first < num[i])
            {
                res[st.top().second] = num[i];
                st.pop();
            }

            st.push({num[i], i});
        }
    }

    while (st.size())
    {
        res[st.top().second] = -1;
        st.pop();
    }

    for (auto i : res)
        std::cout << i << " ";
}