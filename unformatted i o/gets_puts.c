#include <stdio.h>

int main() {
    char input[100]; // A buffer to store the input string

    printf("Enter a line of text: ");
    fgets(input,sizeof(input), stdin); 
    // gets(input); // Read a line of text from the user

    printf("You entered: ");
    puts(input); // Display the input using puts

    return 0;
}
