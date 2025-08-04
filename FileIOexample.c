#include <stdio.h> 
#include <stdlib.h> 

int main() {
    FILE *filePointer;
    filePointer = fopen("example.txt", "w"); 

    if (filePointer == NULL) {
        printf("Error opening file for writing!\n");
        exit(1); 
    }
    
    fprintf(filePointer, "Hello, C File I/O!\n");
    fprintf(filePointer, "This is a second line.\n");
    
    fclose(filePointer);
    printf("Data written to example.txt successfully.\n");
    filePointer = fopen("example.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening file for reading!\n");
        exit(1); 
    }

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("Read from file: %s", buffer);
    }
    fclose(filePointer);
    printf("Data read from example.txt successfully.\n");

    return 0; 
}
