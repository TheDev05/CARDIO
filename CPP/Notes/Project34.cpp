//**Hirechial Inheritence**

#include <iostream>
#include <string>

class studs
{
private:
    std::string name;

public:
    void read(std::string s)
    {
        name = s;
    }

    void show()
    {
        std::cout << "NAME: " << name;
    }
};

class girls : public studs
{
};

class boys : public studs
{
};

int main()
{
    studs obj1;
    girls g;
    boys b;

    g.read("akansha");
    b.read("mohan");

    g.show();
    b.show();

    return (0);
}
