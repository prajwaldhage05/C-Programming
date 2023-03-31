#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char strings[MAX_LENGTH][MAX_LENGTH];
    int n, longest = 0;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Read in each string
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strings[i]);

        // Keep track of the longest string
        if (strlen(strings[i]) > strlen(strings[longest])) {
            longest = i;
        }
    }

    // Display the longest string
    printf("The longest string is: %s\n", strings[longest]);

    return 0;
}