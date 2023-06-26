#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertToUpper(FILE* source, FILE* destination) {
    int c;
    while ((c = fgetc(source)) != EOF) {
        fputc(toupper(c), destination);
    }
}

void convertToLower(FILE* source, FILE* destination) {
    int c;
    while ((c = fgetc(source)) != EOF) {
        fputc(tolower(c), destination);
    }
}

void convertToPureUpperCase(FILE* source, FILE* destination) {
    int c;
    while ((c = fgetc(source)) != EOF) {
        if (islower(c))
            fputc(toupper(c), destination);
        else
            fputc(c, destination);
    }
}

void normalcopy(FILE* source, FILE* destination){
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

}

int main(int argc, char* argv[]) {
    if (argc <3 && argc > 4) {
        printf("Invalid number of arguments.\n");
        printf("Usage: ./a.out <option> <source_file> <destination_file>\n");
        printf("-u: Convert file content to upper case\n");
        printf("-l: Convert file content to lower case\n");
        printf("-s: Convert file content to purely upper case\n");
        return 1;
    }

    char* sourceFileName;
    char* destinationFileName;
    char* option;

    if(argc==3){
        sourceFileName = argv[1];
        destinationFileName = argv[2];        
    }
    else{
        option = argv[1];
        sourceFileName = argv[2];
        destinationFileName = argv[3];
    }

    FILE* source = fopen(sourceFileName, "r");
    FILE* destination = fopen(destinationFileName, "w");

    if ((source == NULL) || (destination == NULL)){
        printf("Failed to open the source file.\n");
        return 1;
    }

    if(argc==3){
        normalcopy(source,destination);
        printf("File copied successfully.\n");
    }

    else{
    if (strcmp(option, "-u") == 0) {
        convertToUpper(source, destination);
        printf("File content converted to upper case.\n");
    } else if (strcmp(option, "-l") == 0) {
        convertToLower(source, destination);
        printf("File content converted to lower case.\n");
    } else if (strcmp(option, "-s") == 0) {
        convertToPureUpperCase(source, destination);
        printf("File content converted to purely upper case.\n");
    } else {
        printf("Invalid option selected.\n");
    }
    }



    fclose(source);
    fclose(destination);

    return 0;
}
