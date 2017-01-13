//
//  main.c
//  sidecode
//
//  Created by Robert Newton on 1/12/17.
//  Copyright © 2017 Robert Newton. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int main()
{
    float in_tooCm, cm_tooIn;
    int cm, in;
    
    cm = 5;
    in = 5;
    
    in_tooCm = in * 2.54;
    cm_tooIn = cm/2.54;
    
    printf("inches to cm : %f \n", in_tooCm);
    
    
    printf("centimeters to in : %f \n", cm_tooIn);
    
    return 0;

}
