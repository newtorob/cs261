#include <stdio.h>

int main() {
    float in_tooCm, cm_tooIn;
    int cm, in;

    cm = 5;
    in = 5;

    in_tooCm = in * 2.54;
    cm_tooIn = cm / 2.54;

    printf("inches to cm : %f cm \n ", in_tooCm);

    printf("centimeters to in : %f in \n", cm_tooIn);

    return 0;
}