//this funciton will generate 10 random numbers and return them using
//an array name which will represent a pointer

#include <stdio.h>
#include <time.h>

//function to generate and return random numbers

int *getRandom()
{
    static int r[10];
    int i;

    //set the seed
    srand((unsigned)time(NULL));

    for (i = 0; i < 10; ++i) {
        r[i] = rand();
        printf("%d\n", r[i]);

    }

    return r;
}

//main funciton to call above defined funciton

int main()
{
    //a pointer to an int
    int *p;
    int i;

    p = getRandom();

    for (i = 0; i < 10; i++)
    {
        printf ("*(p + [%d]) : %d\n", i, *(p + i));
    }

    return 0;
}
