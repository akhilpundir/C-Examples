#include <stdio.h>

int main() {
    char input[] = "Age: 30 Height: 5.9 Grade: A";
    int age;
    float height;
    char grade;

    // Use sscanf to extract data from the input string
    sscanf(input, "Age: %d Height: %f Grade: %c", &age, &height, &grade);
    
    printf("Extracted data:\n");
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}