#include <stdio.h>
#include <string.h>
#include <ctype.h>

void my_strcat(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0') {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

void my_strrev(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void my_strupr(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str1[100], str2[100];
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Concatenate two strings\n");
        printf("2. Compare two strings\n");
        printf("3. Reverse a string\n");
        printf("4. Convert a string to uppercase\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                my_strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            case 2:
                printf("Enter the first string: ");
                scanf("%s", str1);
                printf("Enter the second string: ");
                scanf("%s", str2);
                if (my_strcmp(str1, str2) == 0) {
                    printf("The strings are equal.\n");
                } else if (my_strcmp(str1, str2) < 0) {
                    printf("The first string is less than the second string.\n");
                } else {
                    printf("The first string is greater than the second string.\n");
                }
                break;
            case 3:
                printf("Enter the string to reverse: ");
                scanf("%s", str1);
                my_strrev(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 4:
                printf("Enter the string to convert to uppercase: ");
                scanf("%s", str1);
                my_strupr(str1);
                printf("Uppercase string: %s\n", str1);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}
