#include <stdio.h>
#include <math.h>   

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\nResults from 1 to %d:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            
            printf("Even: %d^3 = %.0f\n", i, pow(i, 3));
        } else {
            
            printf("Odd: %d^2 = %.0f\n", i, pow(i, 2));
        }
    }

    return 0;
}
