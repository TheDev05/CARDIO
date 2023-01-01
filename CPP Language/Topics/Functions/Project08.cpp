//**The function is declared with a void return type, so there is no value to return. Modify the values in memory so that a contains their sum and b contains their absoluted difference.

#include <iostream>
void find_result(int *, int *);

int main()
{
    int num1, num2;

    std::cout << "ENTER TWO NUMBERS: " << std::endl;
    std::cin >> num1 >> num2;

    find_result(&num1, &num2);

    std::cout << num1 << std::endl
              << num2 << std::endl;

    return (0);
}

void find_result(int *p1, int *p2)
{
    int temp, key;
    (*p1 > *p2) ? (temp = *p1, *p1 = *p2, *p2 = temp) : (*p1 = *p1);

    key = *p2;

    *p2 = key - *p1;
    *p1 = *p1 + key;
}