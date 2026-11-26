#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    int ch;

    source = fopen("Source.txt", "r");
    if (source == NULL) {
        printf("Error: Cannot open source file\n");
        return 1;
    }

    destination = fopen("Destiantion.txt", "n");
    if (destination == NULL) {
        printf("Error: Cannot destination file \n");
        fclose(source);
        return 1;
    }
 
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}