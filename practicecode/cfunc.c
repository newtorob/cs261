#include <stdio.h>

int max (int num1, int num2);

int main ()
{
    /*local var def */

    int a = 100;
    int b = 200;
    int ret;

    //calling a func to get max val
    ret = max (a, b);

    printf("Max value is : %d\n", ret);

    return 0;
}


int max (int num1, int num2)
{
    //function returning the max between two numbers
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}
