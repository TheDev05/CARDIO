/* Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.
Lily decides to share a contiguous segment of the bar selected such that:
The length of the segment matches Ron's birth month, and,
The sum of the integers on the squares is equal to his birth day.
Determine how many ways she can divide the chocolate.

Check some examples at:
https://www.hackerrank.com/challenges/the-birthday-bar/problem
*/

#include <iostream>

int main()
{
    int no_of_squares;
    std::cout << "ENTER NO OF SQUARES OF CHOCLATES: " << std::endl;
    std::cin >> no_of_squares;

    int int_on_chocos[no_of_squares + 1];

    std::cout << "ENTER INTEGER VALUES ON CHOCOS: " << std::endl;
    for (int i = 0; i < no_of_squares; i++)
    {
        std::cin >> int_on_chocos[i];
    }

    int month, day;

    std::cout << "ENTER MONTH OF RON'S BIRTH DAY: " << std::endl;
    std::cin >> month;

    int consecutive_count = 0, consecutive_sum = 0, total_valid_share = 0;

    std::cout << "ENTER RON'S BIRTH DAY: " << std::endl;
    std::cin >> day;

    for (int i = 0; i < no_of_squares; i++)
    {
        consecutive_count = 0;
        consecutive_sum = 0;
        int res_i = i;

        while (consecutive_count < month)
        {
            consecutive_sum += int_on_chocos[i];
            consecutive_count++;
            i++;
        }

        i = res_i;

        if (consecutive_sum == day)
        {
            total_valid_share++;
        }
    }

    std::cout << "TOTAL SHARED VALUE: " << total_valid_share;
    return (0);
}