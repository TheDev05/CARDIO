#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    std::vector<std::vector<int>> houses;
    for (int i = 0; i < num; i++)
    {
        std::vector<int> temp(2);
        std::cin >> temp[0] >> temp[1];

        houses.push_back(temp);
    }

    int num = houses.size();

    int house_number[num];
    int position[num];

    for (int i = 0; i < num; i++)
    {
        house_number[i] = houses[i][0];
        position[i] = houses[i][1];
    }

    int copy_position[num];
    for (int i = 0; i < num; i++)
    {
        copy_position[i] = position[i];
    }

    sort(copy_position, copy_position + num);

    int temp;
    int x1, x2;
    int position1, position2;
    int maxi = 0;

    for (int i = 0; i < num - 1; i++)
    {
        int temp = abs(copy_position[i + 1] - copy_position[i]);
        if (temp > maxi)
        {
            maxi = temp;
            x1 = copy_position[i];
            x2 = copy_position[i + 1];
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (x1 == position[i])
        {
            position1 = i;
        }
        else if (x2 == position[i])
        {
            position2 = i;
        }
    }

    std::vector<int> ans;
    if (house_number[position1] > house_number[position2])
    {
        ans.push_back(house_number[position2]);
        ans.push_back(house_number[position1]);
    }
    else
    {
        ans.push_back(house_number[position1]);
        ans.push_back(house_number[position2]);
    }

    return ans;
}