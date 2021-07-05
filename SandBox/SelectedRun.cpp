#include <iostream>

class Option

{
    char smt[40];
};

class Question
{
    int qno;
    Option *a, *b, *c, *d;

public:
    /* When the constructor of question class is invoked 
    at that time option class get memory or came to existence */

    Question()
    {

        a = new Option();
        b = new Option();
        c = new Option();
        d = new Option();
    }

    /* Here if the destructor is called or if life-span of 
    question class object is about to finish then the memory of
    option object gets released that means option class 
    existence depends on question class*/

    ~Question()
    {

        delete a;
        delete b;
        delete c;
        delete d;
    }
};

int main()
{
    Question q1;
}