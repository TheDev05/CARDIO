//** DESTRUCTOR CONCEPT **
// ** 02.03.21

#include <iostream>
using namespace std;
void add();

class data
{
private:
    int a;

public:
    ~data()
    {
        cout << "DESTRUCTOR WORKS" << endl;
    }
};

int main()
{

    add();
    return (0);
    
}

void add()
{
    data obj1; //? BEFORE TERMINATION OF THIS FUNCTION OR ITS OBJECT..DESTRUCTOR WILL CALLED AUTOMATICALLY
} 