/* There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

https://www.hackerrank.com/challenges/sock-merchant/problem */

#include <iostream>
int main()
{
    int total_socks_count;

    std::cout << "ENTER TOTAL NUMBER OF SOCKS: " << std::endl;
    std::cin >> total_socks_count;

    int socks_colour[total_socks_count];

    std::cout << "ENTER SOCKS COLOUR: " << std::endl;
    for (int i = 0; i < total_socks_count; i++)
    {
        std::cin >> socks_colour[i];
    }

    int total_sockspair = 0;
    for (int i = 0; i < total_socks_count; i++)
    {
        int occurence_count = 1;
        for (int j = i + 1; j < total_socks_count; j++)
        {
            if (socks_colour[i] == socks_colour[j])
            {
                occurence_count++;
                socks_colour[j] = -1; // HERE WE LOOSE OUR FIRST ARRAY IF WE WANT TO NOT LOOSE JUST USE AN ANOTHER ARRAY FOR STORING OCCURENCE COUNT
            }
        }

        if (socks_colour[i] != -1)
        {
            total_sockspair += occurence_count / 2;
        }
    }

    std::cout << "TOTAL PAIRED SOCKS: " << std::endl;
    std::cout << total_sockspair;
    return (0);
}