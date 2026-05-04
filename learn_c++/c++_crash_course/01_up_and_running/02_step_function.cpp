#include "step_function.h"
#include <cstdio>

int main() {
    int num1 = 402;
    int result1 = step_function(num1);

    int num2 = 0;
    int result2 = step_function(num2);

    int num3 = -4;
    int result3 = step_function(num3);

    printf("Num1: %d, Step: %d\n", num1, result1);
    printf("Num2: %d, Step: %d\n", num2, result2);
    printf("Num3: %d, Step: %d\n", num3, result3);

    return 0;
}