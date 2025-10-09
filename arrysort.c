#include <stdio.h>

int main() {
int arr[100], n, i, j, temp;

 
printf("Enter number of elements in the array: ");  
scanf("%d", &n);  


if (n <= 0 || n > 100) {  
    printf("Invalid number of elements. Please enter a value between 1 and 100.\n");  
    return 1;  
}  

 
printf("Enter %d integers:\n", n);  
for (i = 0; i < n; i++) {  
    scanf("%d", &arr[i]);  
}  


for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - 1 - i; j++) {  
        if (arr[j] > arr[j + 1]) {  
            
            temp = arr[j];  
            arr[j] = arr[j + 1];  
            arr[j + 1] = temp;  
        }  
    }  
}  


printf("Sorted ar…
