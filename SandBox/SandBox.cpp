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
//         Records(string n,int a): name(n),age(a) {}//! IMPORTANT SHORTCUT
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

#include <iostream>

void positive(long long *p)
{
    if (*p < 0)
    {
        *p = -(*p);
    }
}

int main()
{

    int count;
    std::cin >> count;
    int data[count];

    for (int i = 0; i < count; i++)
    {
        long long n;
        std::cin >> n;
        long long num[n];

        for (int p = 0; p < n; p++)
        {
            std::cin >> num[p];
        }

        for (int k = 1; k < n; k++)
        {
            long long temp = num[k];
            int j = k - 1;

            while (num[j] > temp && j >= 0)
            {
                num[j + 1] = num[j];
                j--;
            }
            num[j + 1] = temp;
        }

        long long trip1 = num[n - 1];
        long long trip2 = num[n - 2];
        long long trip3 = num[n - 3];

        long long sum = 0;
        long long val = 0;

        val = trip1 - trip2;
        positive(&val);
        sum += val;

        val = trip2 - trip3;
        positive(&val);
        sum += val;

        val = trip1 - trip3;
        positive(&val);
        sum += val;

        data[i] = sum;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << data[i] << std::endl;
    }
    return (0);
}
