#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
    char str[100]; // Declare a character array to store the string
    int i, len;
    int flag = 0; // Flag to indicate if it's a palindrome (0 for palindrome, 1 for not)

    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    len = strlen(str); // Get the length of the string

    // Loop through half of the string, comparing characters from both ends
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) { // Compare character at index i with character at len-i-1
            flag = 1; // If characters don't match, set flag to 1
            break;    // Exit the loop as it's not a palindrome
        }
    }

    if (flag == 1) {
        printf("\"%s\" is not a palindrome.\n", str);
    } else {
        printf("\"%s\" is a palindrome.\n", str);
    }

    return 0;
}
