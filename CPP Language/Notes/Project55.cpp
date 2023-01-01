/* Program to delete two elements from array */

#include <iostream>

void remove(int *p, int count, int index)
{
    for (int i = index; i < count; i++)
    {
        *(p + i) = *(p + i + 1);
    }
}

int main()
{
    int count;
    std::cout << "ENTER YOUR COUNT LIMIT:\n";
    std::cin >> count;

    int num[count];
    std::cout << "ENTER YOUR YOUR ARRAY:\n";

    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int index1, index2;
    std::cout << "ENTER TWO DIFFRENT INDECES TO DELETE THEM:\n";
    std::cin >> index1 >> index2;

    if (index1 > index2)
    {
        int temp = index1;
        index1 = index2;
        index2 = temp;
    }

    remove(num, count, index2);
    count--;
    remove(num, count, index1);

    std::cout << "YOUR ARRAY AFTER REMOVAL OF TEO ELEMTS:\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}