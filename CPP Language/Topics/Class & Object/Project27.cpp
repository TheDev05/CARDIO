//**C++ program for Banking Management System using Class.

#include <iostream>
#include <string.h>
using namespace std;

class data
{
private:
    char name[10], full_name[20];
    int pass, age, ammount;

public:
    void change()
    {
        cout << "ENTER YOUR USER_NAME: " << endl;
        cin >> name;
        cout << "ENTER YOUR PASSWORD: " << endl;
        cin >> pass;
    }
    void setdata()
    {
        cout << "ENTER YOUR NAME: " << endl;
        cin >> full_name;
        cout << "ENTER YOUR AGE: " << endl;
        cin >> age;
        cout << "ENTER YOUR AMMOUNT: " << endl;
        cin >> ammount;
        cout << "ENTER YOUR USER_NAME: " << endl;
        cin >> name;
        cout << "ENTER YOUR PASSWORD: " << endl;
        cin >> pass;
    }
    void login()
    {
        char user_name[10];
        int user_pass;

        cout << "ENTER YOUR USERNAME: " << endl;
        cin >> user_name;
        cout << "ENTER YOUR PASSWORD: " << endl;
        cin >> user_pass;

        if (strcmp(user_name, name) == 0 && user_pass == pass)
        {
            cout << "***********WELCOME TO YOUR BANK ACCOUNT*************" << endl;
            cout << "YOUR NAME: " << full_name << endl
                 << "AGE: " << age << endl
                 << "TOTAL AMMOUNT: " << ammount << endl;
        }
        else

        {
            cout << "ACCESS DENIED" << endl;
        }
    }
};

int main()
{
    data user1;
    int access;
    user1.setdata();

    cout << "**********WELCOME IN XYZ PORTAL: ************" << endl
         << "ENTER 1 FOR LOGIN" << endl
         << "ENTER 0 FOR EXIT" << endl;
    cin >> access;

    if (access == 1)
    {
        user1.login();
    }
    else
    {
        if (access == 0)
        {
            return (0);
        }
        else
            cout << "WRONG INPUT";
    }
    return (0);
}