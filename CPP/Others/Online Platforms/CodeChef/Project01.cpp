//* There are N students standing in a row and numbered 1 through N from left to right. You are given a string S with length N, where for each valid i, the i-th character of S is 'x' if the i-th student is a girl or 'y' if this student is a boy. Students standing next to each other in the row are friends.

//* LINK: https://www.codechef.com/problems/XYSTR */

#include <iostream>
#include <cstring>

int main()
{
    int count;
    std::cin >> count;

    char text[count][100002];
    // char text[count][10];

    for (int i = 0; i < count; i++)
    {
        std::cin >> text[i];
    }

    for (int i = 0; i < count; i++)
    {
        int text_count = strlen(text[i]);
        int key = 0;

        for (int j = 0; j < text_count; j++)
        {
            int run = 0;

            if (text[i][j] == 'x' && text[i][j + 1] == 'y')
            {
                run = 1;
                key++;
            }
            if (text[i][j] == 'y' && text[i][j + 1] == 'x')
            {
                run = 1;
                key++;
            }

            if (run == 1)
            {
                j = j + 1;
            }
        }

        std::cout << key << std::endl;
    }

    return (0);
}
