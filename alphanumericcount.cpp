#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[1000];
    int digitCount = 0, specialCharCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isdigit((unsigned char)str[i])) {
            digitCount++;
        }
        else if (!isalpha((unsigned char)str[i]) && 
                 !isdigit((unsigned char)str[i]) && 
                 !isspace((unsigned char)str[i])) {
        
            specialCharCount++;
        }
    }

    printf("\nDigit count: %d\n", digitCount);
    printf("Special character count: %d\n", specialCharCount);

    return 0;
}
