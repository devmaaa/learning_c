#include<stdio.h>

int main() {
    float h = 0;
    int  m = 0;
    printf("Please enter number of Hours: \n");
    scanf("%f", &h);
    m = h * 60;
    printf("%f hours is equivalent to %d minutes. \n", h, m);    
	
    return 0;
}
