#include <stdio.h>

int main() {
    printf("Enter a line of text (press Enter to finish):\n");

    int ch;
    // while ((ch = getchar()) != '\n') {
    //     putchar(ch); // Display the character
    // }
    ch = getchar();
    
    putchar(ch);
    printf("\nProgram finished.\n");

    return 0;
}
