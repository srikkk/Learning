// case handler
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFFER_SIZE 4096

// Function to convert the file content to upper case
void convertToUpperCase(FILE *file) {
    int c;
    while ((c = fgetc(file)) != EOF) {
        fputc(toupper(c), file);
    }
}

// Function to convert the file content to lower case
void convertToLowerCase(FILE *file) {
    int c;
    while ((c = fgetc(file)) != EOF) {
        fputc(tolower(c), file);
    }
}

// Function to convert the file content to purely upper case
void convertToPureUpperCase(FILE *file) {
    int c;
    while ((c = fgetc(file)) != EOF) {
        if (islower(c)) {
            fputc(toupper(c), file);
        } else {
            fputc(c, file);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }

    char *option = argv[1];
    char *sourcePath = argv[2];
    char *destinationPath = argv[3];

    FILE *sourceFile, *destinationFile;
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    // Open the source file in read mode
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy the contents of the source file to the destination file
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    // Handle the user option for text case
    if (strcmp(option, "-u") == 0) {
        fseek(destinationFile, 0, SEEK_SET);
        convertToUpperCase(destinationFile);
    } else if (strcmp(option, "-l") == 0) {
        fseek(destinationFile, 0, SEEK_SET);
        convertToLowerCase(destinationFile);
    } else if (strcmp(option, "-s") == 0) {
        fseek(destinationFile, 0, SEEK_SET);
        convertToPureUpperCase(destinationFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}