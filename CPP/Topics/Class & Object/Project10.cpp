//**C++ program for various Mathematical Operations using Switch case

#include <iostream>
using namespace std;

class data
{
private:
    float a, b;
    int option;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void operations()
    {
        cout << "ENTER 1 FOR ADDITION" << endl
             << "ENTER 2 FOR SUBTRACTION" << endl
             << "ENTER 3 FOR MUNTIPLICATION" << endl
             << "ENTER 4 FOR DIVISON" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "ADD RESULT: " << a + b << endl;
            break;
        case 2:
            cout << "SUBTRAION RESULT: " << a - b << endl;
            break;
        case 3:
            cout << "MUNTIPLICATION RESULT: " << a * b << endl;
            break;
        case 4:
            cout << "DIVISON RESULT: " << (a > b ? a / b : b / a) << endl; //! IMPORTANT
            break;
        default:
            cout << "INVALID INPUT" << endl;
        }
    }
};

int main()
{
    data obj1;
    obj1.setdata(2, 5);
    obj1.operations();
    return (0);
}