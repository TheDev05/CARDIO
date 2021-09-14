//**C++ Program For Count A Words In Given String Even Enter No Of Space's Between String
//**TWO METHODS: COMMENTED LINES ARE OF USER ACCEPTED STRING.
//**UNCOMMENTED ARE OF INTIALISED STRING HAVING TABS AND NEW LINE CHARS.

// #include <iostream>
// #include <cctype>
// #include <cstring>

// int main()
// {
//     // char sen[20];
//     char sen[] = "ankit\t is a\n boy";
//     int count;

//     // std::cout << "ENTER YOUR STRING: " << std::endl;
//     // std::cin.getline(sen, 20);

//     count = strlen(sen);

//     int key = 0;

//     // for (int i = 0; i < count; i++)
//     // {
//     //     if (isblank(sen[i]) || sen[i] == '\t' || sen[i] == '\n')
//     //     {
//     //         key++;
//     //     }
//     // }+

//     for (int i = 0; i < count; i++)
//     {
//         if (isblank(sen[i]) || sen[i] == '\t' || sen[i] == '\n')
//         {
//             key++;

//             while (sen[i] == ' ' || sen[i] == '\n' || sen[i] == '\t')
//             {
//                 i++;
//             }
//         }
//     }

//     std::cout << "TOTAL WORDS COUNT: " << key + 1 << std::endl;
//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>
#include <cctype>

int main()
{
    char text[20];
    std::cout << "ENTER YOUR STRING:  " << std::endl;
    std::cin.getline(text, 20);

    int word = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            word++;
        }
    }

    std::cout << "WORD:" << word + 1;

    return (0);
}
