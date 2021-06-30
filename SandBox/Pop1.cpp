// #include <iostream>
// #include <cctype>
// #include <cstring>

// int main()
// {
//     int t;
//     std::cin >> t;
//     std::cin.ignore();

//     while (t--)
//     {

//         std::string s;
//         std::getline(std::cin, s);

//         int count = s.size();
//         std::cout << count;

//         if (s[0] != '<' || s[1] != '/' || s[count - 1] != '>')
//         {
//             std::cout << "Error" << '\n';
//             continue;
//         }

//         int blank = 0, key = 0;

//         for (int i = 2; i < count - 1; i++)
//         {

//             if (!islower(s[i]) && !isdigit(s[i]))
//             {
//                 if (isblank(s[i]))
//                 {
//                     blank++;
//                 }
//                 else
//                 {
//                     std::cout << "Error" << '\n';
//                     key = 1;
//                     break;
//                 }
//             }
//         }

//         if (blank == count - 3 && count != 3)
//         {
//             std::cout << "Error" << '\n';
//             continue;
//         }

//         if (key == 0)
//         {
//             std::cout << "Success" << '\n';
//         }
//     }

//     return (0);
// }

#include <iostream>
#include <string>

int main()
{
    int count;
    std::cin >> count;

    std::cin.ignore();

    while (count--)
    {

        std::string s;
        std::getline(std::cin, s);

        std::cout << s.size() << '\n';
    }

    return (0);
}