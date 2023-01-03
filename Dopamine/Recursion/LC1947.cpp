#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::vector<int>> &store, std::vector<std::vector<int>> &students, std::vector<std::vector<int>> &mentors, std::set<int> &data, std::vector<int> &temp)
{
    if (temp.size() == students.size())
    {
        store.push_back(temp);
        return 0;
    }

    for (int i = 0; i < students.size(); i++)
    {
        if (data.count(i) == false)
        {
            data.insert(i);
            temp.push_back(i);

            getCount(store, students, mentors, data, temp);

            data.erase(i);
            temp.pop_back();
        }
    }

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> students;
    std::vector<std::vector<int>> mentors;

    for (int i = 0; i < 3; i++)
    {
        std::vector<int> temp(n);
        for (int j = 0; j < n; j++)
        {
            std::cin >> temp[j];
        }

        students.push_back(temp);
    }

    for (int i = 0; i < 3; i++)
    {
        std::vector<int> temp(n);
        for (int j = 0; j < n; j++)
        {
            std::cin >> temp[j];
        }

        mentors.push_back(temp);
    }

    std::set<int> data;
    std::vector<int> temp;
    std::vector<std::vector<int>> store;

    map<pair<int, int>, int> inox;
    for (int i = 0; i < students.size(); i++)
    {
        for (int j = 0; j < mentors.size(); j++)
        {
            int count = 0;
            for (int k = 0; k < students[i].size(); k++)
            {
                if (mentors[i][k] == students[j][k])
                    count++;
            }

            inox[{i, j}] = count;
        }
    }
    
    getCount(store, students, mentors, data, temp);

    int max = 0;
    for (int k = 0; k < store.size(); k++)
    {
        int count = 0;
        for (int i = 0; i < mentors.size(); i++)
        {
            count += inox[{store[k][i], i}];
        }

        max = std::max(max, count);
    }

    std::cout << max << '\n';
}