#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1,i, nextTerm;

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print a message indicating the series
    printf("Fibonacci Series: ");

    // Handle the first two terms separately
    if (n >= 1) {
        printf("%d", t1);
    }
    if (n >= 2) {
        printf(", %d", t2);
    }

    // Generate and print the remaining terms
     for (i = 3; i <= n; ++i) 
	{
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n"); // Newline for better formatting
    return 0;
}
