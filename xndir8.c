#include<stdio.h>

int main() {
    float weight = 0;
    float height = 0;
    float bmi = 0;
  
    printf("please enter your Weight: \n");
    scanf("%f", &weight);
    printf("Please enter your Height: \n");
    scanf("%f", &height);
    bmi = weight / (height * height); 
    printf("Your BMI is: %f", bmi);
    return 0;
}
