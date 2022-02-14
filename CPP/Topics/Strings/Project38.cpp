//**Checking Anagrams (check whether two string is anagrams or not)

#include <iostream>

int len(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    return (i);
}

int main()
{
    char str1[20], str2[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str1, 20);

    std::cout << "ENTER SECOND STRING" << std::endl;
    std::cin.getline(str2, 20);

    int count1 = len(str1), count2 = len(str2);

    int i = 0, key = 0;

    for (int j = 0; j < count1; j++)
    {
        if (str2[i] == str1[j])
        {

            while (i < count2)
            {
                if (str2[i] == str1[j])
                {

                    key++;
                    i++;
                    j++;
                }
            }

            if (key == count2)
            {
                std::cout << "STRING IS ANAGRAM" << std::endl;
                return (0);
            }
        }
    }

    return (0);
}