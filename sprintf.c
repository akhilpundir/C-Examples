#include <stdio.h>

int main() {
    char fstring[100]; // A character array to store the formatted string
    int age = 30;
    float height = 5.9;
    char grade = 'A';

    // Use sprintf to format data into a string
    sprintf(fstring, "Age: %d Height: %.1f Grade: %c", age, height, grade);

    // Display the formatted string
    printf("Formatted data: %s\n", fstring);

    return 0;
}
