//**C++ program Input list of candidates and find winner of the Election based on received votes

#include <iostream>
using namespace std;

class data
{
private:
    int votes;
    static int res;
    char cand[20], party[10];

public:
    void setdata()
    {
        fflush(stdin);
        cout << "ENTER CANDIDATE NAME: " << endl;
        cin >> cand; //? use getline() of <string> for entering full name.
        fflush(stdin);
        cout << "ENTER PARTY NAME: " << endl;
        cin >> party;
        fflush(stdin);
        cout << "ENTER NUMBER OF VOTES ALLOTED: " << endl;
        cin >> votes;
    }

    void showdata(int total, data p[])
    {
        for (int i = 1; i < total; i++) //? i=0 leads error with no idea.
        {
            if (votes < p[i].votes)
            {
                res = i;
            }
        }

        if (res == -1)
            res = 0;

        cout << "*****************************************" << endl
             << "WINNER::WINNER::WINNER::WINNER" << endl
             << "*****************************************" << endl;

        cout << "CANDIDATE NAME: " << p[res].cand << endl;

        cout << "PARTY NAME: " << p[res].party << endl;

        cout << "NUMBER OF VOTES ALLOTED: " << p[res].votes << endl;
    }
};

int data::res = -1;

int main()
{
    data cand[20];
    int total;

    cout << "ENTER TOTAL NUMBER OF CANDIDATES: " << endl;
    cin >> total;

    for (int i = 0; i < total; i++)
    {
        cand[i].setdata();
    }

    cand[0].showdata(total, cand);
    return (0);
}
