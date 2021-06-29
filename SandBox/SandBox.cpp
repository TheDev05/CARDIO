// ********************************************************SPACE FOR LOGIC CHECK****************************************************************
// *****************NOTE: THESE MAY OR MAY NOT BE MY CODE, IT MAY BE POSSIBLE THEY ARE ACCOMANDATED FROM WEB.***********************************
//**********************************************************************************************************************************************
//*********************************************************WORK BELOW THIS LINE*****************************************************************

// #include <iostream>
// using namespace std;
// class Records
// {
//     public:
//     int age;
//     string name;
//         Records() {};
//         Records(string n,int a): name(n),age(a) {}//! IMPORTANT : INITIALIZER CONCEPT
//         void show()
//         {
//             cout<<name<<" : "<<age<<endl;
//         }
//         Records eldest(Records o)
//         {
//             return (o.age>age)? o: *this;
//         }
// };
// int main()
// {
//     Records ob[3]={Records("Ani",50),Records("Arka",21),Records("Ram",30)};
//     Records res[2];
//     for(int i=0;i<2;i++){
//         res[i] = ob[i].eldest(ob[i+1]);
//     }
//     if(res[0].age > res[1].age)
//     res[0].show();
//     else res[1].show();
//     return 0;
// }

// #include <iostream>

// int main()
// {
//     // char str[10] = "ankit";
//     char str[10][10] = {"ANKIT", "RAJ"};

//     std::cout << str[1];
//     return (0);
// }

// #include <iostream>

// using namespace std;

// void Test(int a)
// {
//   try
//   {
//     if (a > 0)
//       throw a;
//     else
//       throw 'Q';
//   }
//   catch (char)
//   {
//     cout << "Caught integer and that integer is: " << a;
//   }
// }
// int main()
// {
//   cout << "testing muntiple catches:";
//   Test(10);
//   Test(0);
// }

// #include <iostream>

// using namespace std;
// int main()
// {
//   int a = 7;
//   string str = "Caught the Exception";
//   try
//   {
//     if (a == 1)
//     {
//       throw 10;
//     }
//     if (a == 2)
//     {
//       throw 3.5f;
//     }
//     if (a != 1 || a != 2)
//     {
//       throw str;
//     }
//   }
//   catch (int x)
//   {
//     cout << "EXCEPTION VALUE IS:" << x << endl;
//   }
//   catch (float y)
//   {
//     cout << "exception value is:" << y << endl;
//   }
//   catch (string str)
//   {
//     cout << str << endl;
//   }
// }

// #include <stdio.h>
// int main()
// {
//     char text[20] = "ankit";
//     char *p = "ankit";
//     // std::cout << p;

//     printf("%s", p);
//     return (0);
// }

// #include <iostream>
// #include <iomanip>

// double fact(int num)
// {
//     double prod = 1;
//     for (num; num >= 1; num--)
//     {
//         prod *= num;
//     }

//     return (prod);
// }

// int main()
// {
//     int count;
//     std::cin >> count;
//     int num[count];

//     for (int i = 0; i < count; i++)
//     {
//         std::cin >> num[i];
//     }

//     for (int i = 0; i < count; i++)
//     {
//     std::cout << fact(num[i]) << std::endl;
//     }

//     return (0);
// }

// #include <iostream>
// #include <cmath>

// int fact(int num)
// {
//     int prod = 1;
//     for (num; num >= 1; num--)
//     {
//         prod *= num;
//     }

//     return (prod);
// }

// int store(int num)
// {

// }

// int main()
// {
//     int takes;
//     std::cin >> takes;
//     int num[takes];

//     for (int i = 0; i < takes; i++)
//     {
//         std::cin >> num[i];
//     }

//     for (int i = 0; i < takes; i++)
//     {
//         store(num[i]);
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     long long int n,b,m,ans;
//     cin>>t;
//     while(t--)
//     {
//         ans=0;
//         cin>>n>>b>>m;
//     while(n>1)
//     {
//         if(n%2==0)
//         {
//             n=n/2;
//             ans=ans+m*n + b;
//             m=m*2;
//         }
//         else
//         {
//             ans+=m*((n+1)/2)+b;
//             m=m*2;
//             n=n-((n+1)/2);
//         }
//     }
//     cout<<(ans+m)<<endl;
//     }
// return 0;
// }

// #include <iostream>
// int main()
// {
//     int friend_hour_strt, friend_hour_last;
//     int friend_min_strt, friend_min_last;
//     char friend_day_strt[3], friend_day_last[3];
//     char friend_timing[20];

//     std::cin.getline(friend_timing, 19);

//     sscanf(friend_timing, "%d:%d %s %d:%d %s", &friend_hour_strt, &friend_min_strt, friend_day_strt, &friend_hour_last, &friend_min_last, friend_day_last);
//     std::cout << friend_hour_strt << ":" << friend_hour_strt << " " << friend_day_strt << " " << friend_hour_last << ":" << friend_min_last << " " << friend_day_last << std::endl;

//     return (0);
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool compare(string a, string b)
// {
//     int ans1 = stoi(a.substr(0, 2)) * 60 * (a.substr(0, 2) != "12") + stoi(a.substr(3, 2)) + 720 * (a.substr(5, 1) == "P");
//     int ans2 = stoi(b.substr(0, 2)) * 60 * (b.substr(0, 2) != "12") + stoi(b.substr(3, 2)) + 720 * (b.substr(5, 1) == "P");

//     return (ans1 <= ans2);
// }

// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s1, s2;
//         cin >> s1 >> s2;
//         s1 += s2;

//         int n;
//         cin >> n;
//         while (n--)
//         {
//             string k11, k12, k21, k22;
//             cin >> k11 >> k12 >> k21 >> k22;
//             k11 += k12;
//             k21 += k22;
//             /* cout << k11 << " " <<  k21 << endl;*/
//             if (compare(k11, s1) && compare(s1, k21))
//                 cout << "1";
//             else
//                 cout << "0";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     int n;
//     std::cin >> n;
//     while (n--)
//     {
//         int D, d, p, q;
//         std::cin >> D >> d >> p >> q;

//         int mod, div;
//         div = D / d;
//         mod = D % d;

//         int sum;
//         sum = (div / 2) * ((2 * p) + ((div - 1) * q)) * d;

//         if (mod != 0)
//         {
//             sum += (p + (D)) * mod;
//         }

//         std::cout << sum << '\n';
//     }

//     return (0);
// }

// #include <iostream>
// int main()
// {
//     int t;
//     std::cin >> t;

//     while (t--)
//     {
//         int x, y, x1, y1;
//         std::cin >> x>> y>> x1>> y1;
//         int sum = 0;

//         sum += x1 / x;
//         sum += y1 / y;

//         std::cout << sum << '\n';
//     }

//     return (0);
// }

#include <iostream>
#include <cctype>

int main()
{
    int t;
    std::cin >> t;
    std::cin.ignore();

    while (t--)
    {
        std::string s;

        std::getline(std::cin, s);
        // std::cin >> s;

        int len = 0;
        len = s.size();
        std::cout << "l: " << len;
       

        if (s[0] != '<' || s[1] != '/' || s[len - 1] != '>')
        {
            std::cout << "Errorsdsdfs" << '\n';
            continue;
        }

        int key = 0, count = 0;
        for (int i = 2; i < len - 1; i++)
        {

            if (isblank(s[i]))
            {
                count++;
            }

            if (!((int)s[i] >= 33 && (int)s[i] <= 126))
            {

                if (s[i] == ' ')
                {
                }

                else
                {
                    std::cout << "Error" << '\n';
                    key = 1;
                    break;
                }
            }
        }

        if (count == len - 3)
        {
            std::cout << "Error" << '\n';
            continue;
        }

        if (key == 0)
        {
            std::cout << "Success" << '\n';
        }
    }

    return (0);
}