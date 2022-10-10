/* */

// TODO: VERY IMPORANT : TOOK 3 HOURS TO DEBUG

#include <iostream>
#include <cstring>

int main()
{
    int count;
    std::cin >> count;

    int data[count];
    char res[7][12] = {"cakewalk", "simple", "easy", "easy-medium", "medium", "medium-hard", "hard"};

    for (int i = 0; i < count; i++)
    {
        int input, key = 0;
        std::cin >> input;

        char text[input][12];
        int rep[7] = {0};
        std::cin.ignore();

        for (int j = 0; j < input; j++) //data loaded
        {
            scanf("%[^\n]%*c", text[j]);
            // std::cin.getline(text[j], 11);

            for (int k = 0; k < 7; k++)
            {

                if (((strcmp(text[j], res[3]) == 0) || (strcmp(text[j], res[4]) == 0)) && (rep[3] != -1))
                {
                    rep[3] = -1;
                    rep[4] = -1;
                    key++;
                }

                if (((strcmp(text[j], res[5]) == 0) || (strcmp(text[j], res[6]) == 0)) && (rep[5] != -1))
                {
                    rep[5] = -1;
                    rep[6] = -1;
                    key++;
                }

                if (strcmp(text[j], res[k]) == 0 && rep[k] != -1)
                {
                    rep[k] = -1;
                    key++;
                }
            }
        }

        if (key == 5)
        {
            data[i] = 1;
        }
        else
            data[i] = 0;
    }

    for (int i = 0; i < count; i++)
    {
        if (data[i] == 1)
        {
            std::cout << "Yes" << std::endl;
        }
        else
            std::cout << "No" << std::endl;
    }

    return (0);
}
