//**C++ Program For Employee Information Using Nested Structure

#include <iostream>

struct stud_marks //* WE HAVE TO DECLARE AFTER MAIN STRUCTURE SO THAT COMPILER CAME TO KNOW
{
    int sub1, sub2;
    int total;
};

struct stud_detail
{
    char name[10];
    char father_name[10];
    char address[10];
    int roll;
    struct stud_marks marks;

    
// struct stud_marks  //* WE CAN ALSO DO THIS WAY
// {
//     int sub1, sub2;
//     int total;
// }marks;


};

int main()
{
    stud_detail stud1;

    std::cout << "ENTER NAME OF STUDENT: " << std::endl;
    std::cin.getline(stud1.name, 10);

    std::cout << "ENTER STUDENT ADDRESS: " << std::endl;
    std::cin.getline(stud1.address, 10);

    std::cout << "ENTER STUD ROLL_NO: " << std::endl;
    std::cin >> stud1.roll;

    std::cout << "ENTER STUDENT MARK SIN PHY AND MATHS: " << std::endl;
    std::cin >> stud1.marks.sub1 >> stud1.marks.sub2;

    std::cout << "STUDENT NAME: " << stud1.name << std::endl
              << "ADDRESS: " << stud1.address << std::endl
              << "ROLL_NO: " << stud1.roll << std::endl
              << "PHYSICS MARKS: " << stud1.marks.sub1 << std::endl
              << "MATHS MARKS: " << stud1.marks.sub2 << std::endl
              << "TOTAL MARKS: " << stud1.marks.sub1 + stud1.marks.sub2 << std::endl;

    return (0);
}