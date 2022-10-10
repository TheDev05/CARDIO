/* Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.

https://www.hackerrank.com/challenges/cats-and-a-mouse/problem */

#include <iostream>

class data
{
public:
    int a, b, c;
    void getvalue()
    {

        std::cin >> a >> b >> c;
    }

    void check()
    {
        if (a < c && b > c) //centre pos..A at left
        {

            if (b - c == c - a)
            {
                std::cout << "Mouse C" << std::endl;
            }

            if (b - c > c - a)
            {
                std::cout << "Cat A" << std::endl;
            }
            if (b - c < c - a)
            {
                std::cout << "Cat B" << std::endl;
            }
        }

        if (a > c && b < c) //centre pos..A at right
        {

            if (a - c == c - b)
            {
                std::cout << "Mouse C" << std::endl;
            }

            if (c - b > a - c)
            {
                std::cout << "Cat A" << std::endl;
            }
            if (c - b < a - c)
            {
                std::cout << "Cat B" << std::endl;
            }
        }

        if (c < a && c < b) //left pos
        {
            if (a - c == b - c)
            {
                std::cout << "Mouse C" << std::endl;
            }
            if (a - c < b - c)
            {
                std::cout << "Cat A" << std::endl;
            }
            if (a - c > b - c)
            {
                std::cout << "Cat B" << std::endl;
            }
        }

        if (c > a && c > b) //right pos
        {
            if (c - a == c - b)
            {
                std::cout << "Mouse C" << std::endl;
            }
            if (c - a < c - b)
            {
                std::cout << "Cat A" << std::endl;
            }
            if (c - a > c - b)
            {
                std::cout << "Cat B" << std::endl;
            }
        }
        if (a == b && a == c)// all at same pos
        {
            std::cout << "Mouse C" << std::endl;
        }

        else
        {
            if (b == c)// b an c are same
            {
                std::cout << "Cat B" << std::endl;
            }
            else if (a == c)
            {
                std::cout << "Cat A" << std::endl;
            }
        }
    }
};

int main()
{
    int count;
    std::cout << "ENTER THE NUMBER OF QUERIES: " << std::endl;
    std::cin >> count;

    data num[count];
    std::cout << "ENTER VALUES: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        num[i].getvalue();
    }

    for (int i = 0; i < count; i++)
    {
        num[i].check();
    }

    return (0);
}