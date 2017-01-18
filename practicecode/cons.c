#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area;

    area = LENGTH * WIDTH;
    printf ("value of area : %d", area);
    printf("%c",NEWLINE);
    //following notes, but newline seems wildy unecessary

    //can also use const instead of define

    return 0;
}
