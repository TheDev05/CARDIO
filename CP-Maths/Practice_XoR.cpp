/* XoR Properties */

#include <iostream>
int main()
{
    int n1, n2;
    std::cout << "ENTER 2 NUMBERS\n";
    std::cin >> n1 >> n2;

    // swapping
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    std::cout << "after swapped\n"
              << n1 << " " << n2 << '\n';

    std::cout << "Muntiply by 2 in first number: " << (n1 << 1) << '\n';
    std::cout << "Dividing by 2 in first number: " << (n1 >> 1) << '\n';

    return(0);
}