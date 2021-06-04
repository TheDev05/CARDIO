/* Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.
The red region denotes the house, where s is the start point, and t is the endpoint. The apple tree is to the left of the house, and the orange tree is to its right.
Assume the trees are located on a single point, where the apple tree is at point a, and the orange tree is at point b.
When a fruit falls from its tree, it lands d units of distance from its tree of origin along the x-axis. *A negative value of  means the fruit fell d units to the tree's left, and a positive value of  means it falls d units to the tree's right. 

https://www.hackerrank.com/challenges/apple-and-orange/problem */

#include <iostream>

int main()
{
    int s, t;

    std::cout << "ENTER SAM's HOUSE BOUNDRY: " << std::endl;
    std::cin >> s >> t;

    int a, b;

    std::cout << "ENTER POSITION OF APPLE AND ORANGE TREES: " << std::endl;
    std::cin >> a >> b;

    int count1, count2;
    std::cout << "ENTER FALLED APPLE COUNT THEN ORANGE COUNT:" << std::endl;
    std::cin >> count1 >> count2;

    int apple[count1], orange[count2];

    std::cout << "ENTER FALLED APPLE POSITIONS: " << std::endl;
    for (int i = 0; i < count1; i++)
    {
        std::cin >> apple[i];
    }

    std::cout << "ENTER FALLED ORANGE POSITIONS: " << std::endl;
    for (int i = 0; i < count2; i++)
    {
        std::cin >> orange[i];
    }

    int count_apple = 0, count_orange = 0;
    for (int i = 0; i < count1; i++) //verifing for apple position
    {
        if (apple[i] > 0)
        {
            int sum = apple[i] + a;

            if (sum >= s && sum <= t)
            {
                count_apple++;
            }
        }
    }

    for (int i = 0; i < count2; i++)
    {
        if (orange[i] < 0)
        {
            // orange[i] = -(orange[i]); //! why this doesnot work at HR compiler
            // (diff < 0) ? (diff = -(diff)) : (diff = diff);
            int diff = orange[i] + b;

           
            if (diff <= t && diff >= s)
            {
                count_orange++;
            }
        }
    }

    std::cout << "APPLE COUNT:" << count_apple << std::endl
              << "ORANGE COUNT: " << count_orange;
    return (0);
}
