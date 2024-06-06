#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> occurrencesOfElement(vector<int> &num, vector<int> &queries, int x)
    {

        std::map<int, std::vector<int>> data;
        for (int i = 0; i < num.size(); i++)
        {
            data[num[i]].push_back(i);
        }

        std::vector<int> result;
        for (int i = 0; i < queries.size(); i++)
        {
            int idx = -1;
            if (data[x].size() >= queries[i])
                idx = data[x][queries[i] - 1];

            result.push_back(idx);
        }

        return result;
    }
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n), queries(n);
    for (auto &i : num)
        std::cin >> i;

    for (auto &i : queries)
        std::cin >> i;

    int x;
    std::cin >> x;

    Solution Obj;
    std::cout << Obj.occurrencesOfElement(num, queries, x);
}