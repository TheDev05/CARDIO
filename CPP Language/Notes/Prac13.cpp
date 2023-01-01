// **COPY CONSTRUCTOR CONCEPT/CONSTRUCTOR OVERLOADING **
//  ** 20.03.21

#include <iostream>
using namespace std;

class area
{
private:
    int ar;

public:
    area(int l, int b) //? EXECUTE ONLY FOR RECTANGLE NOT FOR SQUARE
    {
        ar = l * b;
    }
    area(int s) //?? EXECUTE ONLY FOR SQUARE NOT FOR RECATANGLE
    {
        ar = s * s;
    }
    area()
    {
        cout << "RECTANGLE=L*B" << endl
             << "SQUARE = SIDE * SIDE" << endl;
    }
    area(area &p)
    {
        ar = p.ar + 50;
    }
    void showdata()
    {
        cout << "AREA: " << ar << endl;
    }
};

int main()
{

    area formulla, square(2), rectangle(2, 4), data(rectangle); //! DOUBT: HOW TO GET USER INPUT HERE

    rectangle.showdata();
    square.showdata();
    data.showdata();

    return (0);
}
