#include <stdio.h>

int main() {
    // Open a file for writing (create a new file or overwrite an existing one)
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file for writing.\n");
        return 1;
    }

    int age = 30;
    float height = 5.9;
    char grade = 'A';

    // Use fprintf to write data to the file
    fprintf(file, "Age: %d Height: %.1f Grade: %c\n", age, height, grade);

    // Close the file
    fclose(file);

    printf("Data has been written to 'output.txt'.\n");

    return 0;
}
