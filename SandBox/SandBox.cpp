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

#include <iostream>
#include <cmath>

int fact(int num)
{
    int prod = 1;
    for (num; num >= 1; num--)
    {
        prod *= num;
    }

    return (prod);
}

int store(int num)
{
    
}

int main()
{
    int takes;
    std::cin >> takes;
    int num[takes];

    for (int i = 0; i < takes; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < takes; i++)
    {
        store(num[i]);
    }
}