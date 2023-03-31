#include<stdio.h>

int digit_sum(int n) {
    if (n < 10) {
        return n;  // Base case: single-digit number
    } else {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;  // Add the last digit to the sum
            n /= 10;        // Remove the last digit from the number
        }
        return digit_sum(sum);  // Recursively call digit_sum with the new sum
    }
}

void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Sum of Digits: %d",digit_sum);
}

