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
        int n;
        std::cin >> n;

        int num[n];

        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];
        }

        int count = n;

        for (int j = 0; j < n - 1; j++)
        {
            for (int p = j + 1; p < n; p++)
            {
                int sum = num[j] + num[p];
                int prod = num[j] * num[p];

                if (sum == prod)
                {
                    count++;
                    // std::cout << num[j] << " " << num[p] << '\n';
                }
            }
        }

        std::cout << count << '\n';
    }
    return (0);
}