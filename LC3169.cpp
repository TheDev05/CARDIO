#include <bits/stdc++.h>
using namespace std;

/*
You are given a positive integer days representing the total number of days an employee is available for work (starting from day 1). You are also given a 2D array meetings of size n where, meetings[i] = [start_i, end_i] represents the starting and ending days of meeting i (inclusive).

Return the count of days when the employee is available for work but no meetings are scheduled.

Note: The meetings may overlap.

Example 1:

Input: days = 10, meetings = [[5,7],[1,3],[9,10]]

Output: 2

Explanation:

There is no meeting scheduled on the 4th and 8th days.

Example 2:

Input: days = 5, meetings = [[2,4],[1,3]]
1 6
4 8
5 10

Output: 1

Explanation:

There is no meeting scheduled on the 5th day.

Example 3:

Input: days = 6, meetings = [[1,6]]

Output: 0

Explanation:

Meetings are scheduled for all working days.

1 6
4 8
5 10

100 -100
5 10

1 2
6 8
6 12
12 15


*/

int main()
{

    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    int k;
    std::cin >> k;

    ranges::sort(num);

    int left = num[0][0], right = num[0][1];
    for (int i = 0; i < num.size(); i++)
    {
        if (left <= num[i][0] && num[i][0] <= right)
            right = std::max(right, num[i][1]);
        else
        {
            k = k - ((right - left) + 1);

            left = num[i][0];
            right = num[i][1];
        }
    }

    k = k - ((right - left) + 1);

    std::cout << k;
}