#include <stdio.h>

int isEven(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter the number of integers to check: ");
    scanf("%d", &n);
    int num;
    for (int i = 0; i < n; i++) {
        printf("Enter integer #%d: ", i+1);
        scanf("%d", &num);
        if (isEven(num)) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    }
    return 0;
}
