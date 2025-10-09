#include <stdio.h>

int main() {
FILE *file;
char filename[] = "example.txt";
char data[] = "Hello, this is a sample text written to the file.\n";
char buffer[256];

file = fopen(filename, "w");  
if (file == NULL) {  
    perror("Error opening file for writing");  
    return 1;  
}  

fprintf(file, "%s", data);  
fclose(file);               
printf("Data written to file successfully.\n");  

// Read from file  
file = fopen(filename, "r");    
if (file == NULL) {  
    perror("Error opening file for reading");  
    return 1;  
}  

printf("Contents of the file:\n");  
while (fgets(buffer, sizeof(buffer), file) != NULL) {  
    printf("%s", buffer);  
}  
fclose(file);  

return 0;

}
