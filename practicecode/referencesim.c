#include <stdio.h>

void foo(int *a)
{
    *a = *a + 2;
}

void main (int argc, char **argv)
{
    int b = 6;
    foo (&b);
    printf("b = %d\n" , b);
}
