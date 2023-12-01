#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        printf("Factorial of %d = %llu\n", number, factorial(number));
    }

    return 0;
}