//** Return multiple values from a function using pointers.
//**USING STRUCTURE:

#include <stdio.h>

struct data
{
    int a, b;
    float c;
};

struct data getvalue(struct data);

int main()
{
    struct data var1;
    var1.a = 5;
    var1.b = 2;
    var1.c = 2.2;

    var1 = getvalue(var1);
    printf("%d %d %.1f", var1.a, var1.b, var1.c);
    return (0);
}

struct data getvalue(struct data var2)
{
    var2.a = var2.a + 1;
    var2.b = var2.b + 1;
    var2.c = var2.c + 1;

    return (var2);
}
