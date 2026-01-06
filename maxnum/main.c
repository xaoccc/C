#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>   

double maxnum(double nums[], int size) {
    double biggest = nums[0];
    for (int i = 0; i < size; i++ ) {        
        if (nums[i] > biggest) {
            biggest = nums[i];
        }
    }
    return biggest;
}

int main()
{    
    double nums[] = {8.4, 234, 17, 25, 512, 635.17, 5, 8};
    printf("The biggest number is: %f", maxnum(nums, 8));
    Sleep(2000);
    return 0;
}

