// #include <iostream>
// #include <cctype>
// #include <cstring>
// #include <string>

// int main()
// {
//     int t;
//     std::cin >> t;

//     std::cin.ignore();
//     std::cin >> std::ws;

//     while (t--)
//     {

//         std::string s;
//         std::getline(std::cin, s);

//         int count = s.size();
//         // std::cout << count;

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

//         if (blank == count - 3)
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
int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        std::string s, s1;
        int key = 0;

        std::cin >> s;
        std::cin >> s1;

        int p = s.find('b', 0);
        int p1 = s.find('b', p + 1);
        int p2 = s.find('o', 0);

        if (p != -1 && p1 != -1 && p2 != -1)
        {
            std::cout << "yes" << '\n';
            continue;
        }

        int q = s1.find('b', 0);
        int q1 = s1.find('b', q + 1);
        int q2 = s1.find('o', 0);

        if (q != -1 && q1 != -1 && q2 != -1)
        {
            std::cout << "yes" << '\n';
            continue;
        }

        s = s + s1;

        int count = s.length();

        int index = s.find('b', 0);
        (index + 3 < count && index != -1) ? s[index + 3] = 'z' : s[index + 3] = s[index + 3];
        (index - 3 >= 0 && index != -1) ? s[index - 3] = 'z' : s[index - 3] = s[index - 3];
        (index != -1) ? key += 1 : key = key;

        int index1 = s.find('b', index + 1);
        (index1 + 3 < count && index1 != -1) ? s[index1 + 3] = 'z' : s[index1 + 3] = s[index1 + 3];
        (index1 - 3 >= 0 && index1 != -1) ? s[index1 - 3] = 'z' : s[index1 - 3] = s[index1 - 3];
        (index1 != -1) ? key += 1 : key = key;

        int index3 = s.find('o', 0);
        (index3 + 3 < count && index3 != -1) ? s[index3 + 3] = 'z' : s[index3 + 3] = s[index3 + 3];
        (index3 - 3 >= 0 && index3 != -1) ? s[index3 - 3] = 'z' : s[index3 - 3] = s[index3 - 3];
        (index3 != -1) ? key += 1 : key = key;

        if (key == 3)
        {
            std::cout << "yes" << '\n';
        }
        else
            std::cout << "no" << '\n';
    }
}
