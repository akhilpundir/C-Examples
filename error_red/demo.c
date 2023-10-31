#include <stdio.h>

int main() {
    float num1, num2, result;
    scanf("%f %f",&num1, &num2);
    if(num2 == 0)
    {
        fprintf(stderr, "Error: division by zero\n");
        return 1;
    }
    result = num1/num2;
    printf("%f\n", result);
    return 0; // Exit with a success code
}
