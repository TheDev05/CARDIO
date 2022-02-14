//**BINARY SEARCH PRACTICE:

#include <iostream>

void ins_sort(int *p, int count)
{
    for (int i = 1; i < count; i++)
    {
        int temp = *(p + i);
        int j = i - 1;

        while (j >= 0 && temp < *(p + j))
        {
            *(p + j + 1) = *(p + j);
            j--;
        }
        *(p + j + 1) = temp;
    }
}

int main()
{
    int count;
    std::cout << "ENTER YOUR INPUT LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    ins_sort(num, count);

    int i, l, mid;

    i = 0;
    l = count - 1;
    mid = (i + l) / 2;

    int key;
    std::cout << "ENTER THE NUMBER YOU WANNA FIND: " << std::endl;
    std::cin >> key;

    while (i <= l)
    {
        mid = (num[i] + num[l]) / 2;

        if (mid == key)
        {
            std::cout << "FOUND" << std::endl;
            break;
        }

        else if (key < mid)
        {
            l = mid - 1;
        }

        else if (key > mid)
        {
            i = mid + 1;
        }
    }

    return (0);
}