 #include <stdio.h>
#include <math.h>   

int main() {
    double number = 9.75;

    printf("Original number: %.2f\n", number);


    printf("trunc(%.2f) = %.0f\n", number, trunc(number));

    
    printf("sqrt(%.2f) = %.2f\n", number, sqrt(number));

    printf("pow(%.2f, 2) = %.2f\n", number, pow(number, 2));


    printf("floor(%.2f) = %.0f\n", number, floor(number));


    printf("ceil(%.2f) = %.0f\n", number, ceil(number));

    return 0;
}
