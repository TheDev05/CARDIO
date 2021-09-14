//**C++ Program for enter Patient details using Inheritance

#include <iostream>

class hospital
{
    std::string sector;

public:
    void read_sector(std::string s)
    {
        sector = s;
    }

    void show_sector()
    {
        std::cout << "SECTOR: " << sector << '\n';
    }
};

class patient : public hospital
{
    std::string name;
    int reg_no;
    int contact;

public:
    void read_name(std::string p)
    {
        name = p;
    }
    void read_reg(int y)
    {
        reg_no = y;
    }
    void read_contact(long x)
    {
        contact = x;
    }

    void show_name()
    {
        std::cout << "NAME: " << name << '\n';
    }

    void show_reg()
    {
        std::cout << "REGISTRATION_NO: " << reg_no << '\n';
    }

    void show_contact()
    {
        std::cout << "CONTACT_NO: " << contact << '\n';
    }
};

int main()
{
    patient obj;

    obj.read_sector("Patient");
    obj.read_name("DILJIT DOSANJH");
    obj.read_reg(1234);
    obj.read_contact(1234567890);

    obj.show_sector();
    obj.show_name();
    obj.show_reg();
    obj.show_contact();

    return (0);
}