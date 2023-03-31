#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a = 12;
    int b = 18;
    int result = gcd(a, b);
    printf("The GCD of %d and %d is %d\n", a, b, result);
    return 0;
}
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}