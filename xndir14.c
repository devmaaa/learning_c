#include<stdio.h>

int main() {
    float input = 0.0;
    float floatPart = 0.0;
    int intPart = 0;

    printf("Enter a decimal value: \n");
    scanf("%f", &input);
    intPart = (int)input;
    floatPart = input - (float)intPart;
    printf("Value %f can be split in to %d and %f\n", input, intPart, floatPart);

    return 0;
}
