/* Program to delete first occurence of an element from array */

#include <iostream>

int find(int *p, int count, int key)
{
    for (int i = 0; i < count; i++)
    {
        if (key == *(p + i))
        {
            return (i);
        }
    }

    return (0);
}

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
    std::cout << "ENTER YOUR COUNT VALUE:\n>>";
    std::cin >> count;

    int num[count];
    std::cout << "ENTER YOUR ARRAY ELEMTS:\n>>";

    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int key;
    std::cout << "ENTER THE ELEMENT U WANNA DELETE:\n>>";
    std::cin >> key;

    int index = find(num, count, key);
    if (index == 0)
    {
        std::cout << "ENTER VALID ELEMENT TO DELETE:\n>>";
    }

    remove(num, count, index);
    count--;

    std::cout << "YOUR ARRAY AFTER REMOVAL OF KEY IS:\n>>";
    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}