#include<stdio.h>
int main() {
    int num1, num2, sum;

    // Asking user to input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the sum
    printf("Sum: %d\n", sum);

    return 0;
}

