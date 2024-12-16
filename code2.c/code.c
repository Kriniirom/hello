#include<stdio.h>
int main() {
    int num1, num2, sum ,sub ;

    // Asking user to input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the sum
    printf("Sum: %d\n", sum);
    sub = num1 - num2;
    printf("sub: %d\n", sub);

    return 0;
}

