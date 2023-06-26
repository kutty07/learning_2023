#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("input.txt", "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    destinationFile = fopen("output.txt", "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;

}
