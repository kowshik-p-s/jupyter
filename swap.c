#include <stdio.h>

int main() {
	int a,b;

    printf("give number a:");
    scanf("%d",&a);
    printf("give number b:");
    scanf("%d",&b);

    a = a + b;  
    b = a - b; 
    a = a - b;  

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
