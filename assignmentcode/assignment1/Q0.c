/* CS261- Assignment 1 - Q. 0*/
/* Name:Robert Newton
 * Date: 01/21/2017
 * Solution description: This program runs the skeleton code provided,
 * we init int x, and use fooA to get the address and value information
 */
 
#include <stdio.h>
#include <stdlib.h>

void fooA(int* iptr){
     /*Print the value pointed to by iptr*/
    printf("the value pointed to by *iptr is %x\n", *iptr);
     /*Print the address pointed to by iptr*/
    printf("the address pointed to by iptr %x\n", &fooA);
     /*Print the address of iptr itself*/
    printf("the address of iptr is %x\n", &iptr);
     
}

int main(){
    
    /*declare an integer x*/
    int x;

    x = 4;
    /*print the address of x*/
    printf("The address of x is %x\n", &x);

    /*Call fooA() with the address of x*/
    fooA(&x);
    /*print the value of x*/
    printf("The value of x is %x\n", x);
    return 0;
}
