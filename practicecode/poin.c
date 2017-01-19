#include <stdio.h>

int main()
{
    int var = 20;
    int *ip;

    ip = &var; // store addresses of var in pointer variable

    printf("Address of var variable: %x\n", &var);

    //address stored in pointer
    printf("Address stored in ip variable: %x\n", ip);

    //access value using the pointer
    printf("Value of *ip variable: %d\n", *ip);

    return 0;

    //will get warnings with this running, don't worry about it
}
