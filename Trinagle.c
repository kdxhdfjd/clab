#include <stdio.h>

int main() {
    char ch;
    int lines;
    int i, j; 

    printf("Enter a character to print: ");
    scanf(" %c", &ch);

    printf("Enter number of lines: ");
    scanf("%d", &lines);

    printf("\nPattern:\n");

    for (i = 1; i <= lines; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
