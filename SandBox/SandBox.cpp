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

#include <iostream>

class student
{
private:
  int age;
  char first_name[55];
  char last_name[55];
  int standard;

public:
  void set_age()
  {
    std::cin >> age;
  }

  void get_age()
  {
    std::cout << age;
  }

  void set_first_name()
  {
    std::cin >> first_name;
  }

  void get_first_name()
  {
    std::cout << first_name;
  }

  void set_last_name()
  {
    std::cin >> last_name;
  }

  void get_last_name()
  {
    std::cout << last_name;
  }

  void set_standard()
  {
    std::cin >> standard;
  }

  void get_standard()
  {
    std::cout << standard;
  }
};

int main()
{
  student stud;

  stud.set_age();
  stud.set_first_name();
  stud.set_last_name();
  stud.set_standard();

  stud.get_age();
  std::cout << std::endl;

  stud.get_last_name();
  std::cout << ","
            << " ";

  stud.get_first_name();
  std::cout << std::endl;

  stud.get_standard();
  std::cout << std::endl
            << std::endl;

  stud.get_age();
  std::cout << ",";

  stud.get_first_name();
  std::cout << ",";

  stud.get_last_name();
  std::cout << ",";

  stud.get_standard();

  return (0);
}