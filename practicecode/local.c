#include <stdio.h>

/*

  Fairly normal stuff here, if it is declared in the function
  the var's value is 'localized' for usage in that function 
 */

int main ()
{
    //local var declaration
    int a, b;
    int c;

    //actual init
    a = 10;
    b = 20;
    c = a + b;

    printf("value of a = %d, b = %d and c = %d\n", a, b, c);

    return 0;
}
