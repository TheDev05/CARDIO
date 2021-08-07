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

// #include <iostream>

// int check(std::string s, int count)
// {

//     int b = 0, o = 0;

//     for (int j = 0; j < count; j++)
//     {
//         if (s[j] == 'b')
//         {
//             b++;
//         }

//         if (s[j] == 'o')
//         {
//             o++;
//         }
//     }

//     if (b >= 2 && o >= 1)
//     {
//         return (1);
//     }
//     else
//         return (0);
// }

// int main()
// {
//     int t;
//     std::cin >> t;

//     while (t--)
//     {
//         char text1[4];
//         char text2[4];

//         std::string s;

//         std::cin >> text1;
//         std::cin >> text2;

//         for (int i = 0; i < 4; i++)
//         {

//             if (text1[i] == 'b' || text1[i] == 'o')
//             {
//                 s += text1[i];
//             }
//         }

//         if (check(s, s.length()))
//         {
//             std::cout << "yes" << '\n';
//             continue;
//         }

//               for (int j = 0; j < 4; j++)
//         {

//             if (text2[j] == 'b' || text2[j] == 'o')
//             {
//                 s += text2[j];
//             }
//         }

//         if (check(s, s.length()))
//         {
//             std::cout << "yes" << '\n';
//         }
//         else
//             std::cout << "no" << '\n';
//     }

//     return (0);
// }

// #include <iostream>
// int main()
// {

//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);

//     int t;
//     std::cin >> t;

//     while (t--)
//     {
//         int n;
//         long long a, b;

//         std::cin >> a >> b >> n;

//         for (int i = 1; n >= 1; i++)
//         {

//             if (i % 2 == 0)
//             {
//                 b = b * 2;
//             }
//             else
//                 a = a * 2;

//             n--;
//         }

//         if (a > b)
//         {
//             std::cout << a / b << '\n';
//         }
//         else
//             std::cout << b / a << '\n';
//     }

//     return (0);
// }

// #include <iostream>
// #include <cmath>

// int main()
// {
//     int t;
//     std::cin >> t;

//     while (t--)
//     {
//         long long xnum;
//         std::cin >> xnum;

//         long long xzero = 0, xone = 0;

//         long long xcount = floor(log10(xnum) + 1);
//         // std::cout << "count: " << xcount << '\n';

//         for (long long i = 0; xnum > 0; i++)
//         {
//             int xrem = xnum % 10;

//             if (xrem == 0)
//             {
//                 xzero++;
//             }
//             else
//                 xone++;

//             xnum = xnum / 10;
//         }

//         // std::cout << "zero: " << xzero << '\n';
//         // std::cout << "one: " << xone << '\n';

//         if (xcount == 1)
//         {
//             std::cout << "YES" << '\n';
//             continue;
//         }

//         if (xzero == 1 && xone == xcount - 1)
//         {
//             std::cout << "YES" << '\n';
//             continue;
//         }
//         else if (xone == 1 && xzero == xcount - 1)
//         {
//             std::cout << "YES" << '\n';
//             continue;
//         }

//         std::cout << "NO" << '\n';
//     }

//     return (0);
// }

/* Following Testcases won't work perfecly: 
   12312312, 1231237 etc */

// #include <iostream>
// int main()
// {
//     int t;
//     std::cin >> t;

//     while (t--)
//     {
//         int n, k;
//         std::cin >> n >> k;

//         int lim = n - k;
//         std::string s1, s2, ch;

//         for (int i = 0; i < n; i++)
//         {
//             int val;
//             std::cin >> val;

//             if (i < k)
//             {
//                 ch = std::to_string(val);
//                 s1 += ch;
//             }
//             else
//             {
//                 ch = std::to_string(val);
//                 s2 += ch;
//             }
//         }

//         if (s1 == s2)
//         {
//             std::cout << "0" << '\n';
//         }
//         else
//         {
//             std::cout << n - k << '\n';
//         }
//     }

//     return (0);
// }

// #include <iostream>
// #include <cmath>

// int pop = 0;

// int main()
// {
//     int t;
//     std::cin >> t;

//     while (t--)
//     {
//         int n, m;
//         std::cin >> n >> m;

//         for (long long i = n; i <= m; i++)
//         {
//             int key = 0;
//             pop++;

//             for (int j = 2; j <= sqrt(i); j++)
//             {
//                 pop++;
//                 if (i % j == 0)
//                 {
//                     key = 1;
//                     break;
//                 }
//             }

//             if (key == 0 && i != 1)
//             {
//                 std::cout << i << '\n';
//             }
//         }

//         std::cout << '\n';

//     }

//     return (0);
// }

