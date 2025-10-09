#include <stdio.h>

int main() {
int n,i,j;

printf("Enter the number of rows (n > 0): ");  
scanf("%d", &n);  

 
if (n <= 0) {  
    printf("Please enter a positive integer greater than 0.\n");  
    return 1;  
}  


for ( i = 1; i <= n; i++) {  
    for ( j = 1; j <= i; j++) {  
        printf("$");  
    }  
    printf("\n");  
}  

return 0;

}
