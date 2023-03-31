#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, x;
    double sum = 0.0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int term = 2 * i + 1;
        int sign = (i % 2 == 0) ? 1 : -1;
        double numerator = power(x, term);
        double denominator = factorial(term);
        sum += sign * numerator / denominator;
    }
    printf("The sum of the first %d terms of the Taylor series for sin(%d) is: %f\n", n, x, sum);
    return 0;
}
