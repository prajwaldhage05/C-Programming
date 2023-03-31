#include <stdio.h>

int main() {
    int n, *ptr, sum_even = 0, sum_odd = 0;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    ptr = arr;
    
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        if(*(ptr + i) % 2 == 0) {
            sum_even += *(ptr + i);
        }
        else {
            sum_odd += *(ptr + i);
        }
    }
    
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);
    
    return 0;
}
