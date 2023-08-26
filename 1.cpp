#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<std::string>> logs;
    for (int i = 0; i < n; i++)
    {
        std::vector<std::string> temp(3);
        for (auto &j : temp)
            std::cin >> j;

        logs.push_back(temp);
    }

    std::map<pair<string, string>, int> data;
    for (int i = 0; i < logs.size(); i++)
    {

        std::string user, date, time;

        user = logs[i][0];
        date = logs[i][2];
        time = logs[i][1];

        int hour = stoi(time.substr(0, 2));
        int min = stoi(time.substr(3, 2));
        int sec = stoi(time.substr(6, 2));

        if (hour >= 24)
            continue;
        if (min > 60)
            continue;
        if (sec > 60)
            continue;

        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        int year = stoi(date.substr(0, 4));

        if (month > 12 || month <= 0)
            continue;
        if (day > 31 || day <= 0)
            continue;

        if (month == 02)
        {
            if (day > 29)
                continue;

            if (year % 400 == 0)
            {
                if (day != 29)
                    continue;
            }
            else if (year % 100 == 0)
            {
                if (day != 28)
                    continue;
            }
            else if (year % 4 == 0)
            {
                if (day != 29)
                    continue;
            }
        }

        data[{user, date}]++;
    }

    std::vector<std::vector<std::string>> result;
    for (auto i : data)
    {
        std::vector<std::string> temp;

        temp.push_back(i.first.first);
        temp.push_back(i.first.second);
        temp.push_back(to_string(i.second));

        result.push_back(temp);
    }

    // return result;

    for (auto i : result)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}