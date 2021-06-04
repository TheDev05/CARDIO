// ** CONSTRUCTOR **
// ** 20.03.21
//****************WIFI ACCESS PORTAL*************

#include <iostream>
using namespace std;

class portal
{
private:
    int userID;
    int pass;

public:
    portal()
    {
        userID = 0000;
        pass = 1234;
    }

    void login(int p, int q)
    {
        if (p == 0000 && q == 1234)
        {
            cout << "LOGIN SUCCESFULL, NOW YOU HAVE ACEES OF WIFI" << endl;
        }
        else
            cout << "ACCEESS DENIED, TRY NEXT TIME" << endl;
    }
};

int main()
{
    portal user1;
    int temp1, temp2;

    cout << "ENTER YOUR USERID AND PASSWORD FOR LOGIN:" << endl;
    cin >> temp1 >> temp2;

    user1.login(temp1, temp2);

    return (0);
}