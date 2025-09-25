#include <stdio.h>
#include <stdbool.h>  

int main() {
    
    int x;
    bool found = false;

    printf("Finding at least one root of the equation x^2 - 5x + 6 = 0\n");

    for (x = -100; x <= 100; ++x) {
        int result = x * x - 5 * x + 6;

        if (result == 0) {
            printf("One root found: x = %d\n", x);
            found = true;
            break;  
        }
    }

    if (!found) {
        printf("No integer root found in the range.\n");
    }

    return 0;
}
