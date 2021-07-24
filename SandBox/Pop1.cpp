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

// #include <iostream>

// int main()
// {
//     int x;
//     while (std::cin >> x)
//     {
//         std::cout << x++;
//     }
// }

// #include <iostream>
// int main()
// {
//     int t;
//     std::cin >> t;

//     while (t--)
//     {
//         std::string xtext;
//         std::cin >> xtext;

//         int xzero = 0, xone = 0;
//         // std::string xtext = std::to_string(xnum);

//         int xcount = xtext.size();

//         for (int i = 0; i < xcount; i++)
//         {
//             if (xtext[i] == '0')
//             {
//                 xzero++;
//             }
//             else if (xtext[i] == '1')
//             {
//                 xone++;
//             }
//         }

//         if (xzero == 1 && xone == xcount - 1)
//         {
//             std::cout << "Yes" << '\n';
//             continue;
//         }
//         else if (xone == 1 && xzero == xcount - 1)
//         {
//             std::cout << "Yes" << '\n';
//             continue;
//         }

//         std::cout << "No" << '\n';
//     }

//     return (0);
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int pointer = 0;
        int min = arr[0];

        for(int i=0; i<n; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
                pointer = i;
            }
        }

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            if(i != pointer)
            {
                ans += (arr[i] - min);
            }
        }

        cout<<ans<<endl;

    }
}