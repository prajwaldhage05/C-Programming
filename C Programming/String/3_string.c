#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH], temp[MAX_LENGTH];
    int choice, result;

    while (1) {
        printf("\n1. Length\n2. Copy\n3. Concatenation\n4. Compare\n5. Reverse\n6. Uppercase\n7. Lowercase\n8. Check Case\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of the string is %d\n", strlen(str1));
                break;
            case 2:
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(temp, str1);
                printf("Copied string is %s\n", temp);
                break;
            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string is %s\n", str1);
                break;
            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                result = strcmp(str1, str2);
                if (result == 0) {
                    printf("Strings are equal\n");
                }
                else if (result < 0) {
                    printf("%s is less than %s\n", str1, str2);
                }
                else {
                    printf("%s is greater than %s\n", str1, str2);
                }
                break;
            case 5:
                printf("Enter a string: ");
                scanf("%s", str1);
                strrev(str1);
                printf("Reversed string is %s\n", str1);
                break;
            case 6:
                printf("Enter a string: ");
                scanf("%s", str1);
                for (int i = 0; str1[i] != '\0'; i++) {
                    str1[i] = toupper(str1[i]);
                }
                printf("Uppercase string is %s\n", str1);
                break;
            case 7:
                printf("Enter a string: ");
                scanf("%s", str1);
                for (int i = 0; str1[i] != '\0'; i++) {
                    str1[i] = tolower(str1[i]);
                }
                printf("Lowercase string is %s\n", str1);
                break;
            case 8:
                printf("Enter a string: ");
                scanf("%s", str1);
                if (isupper(str1[0])) {
                    printf("String is in uppercase\n");
                }
                else if (islower(str1[0])) {
                    printf("String is in lowercase\n");
                }
                else {
                    printf("String is not in uppercase or lowercase\n");
                }
                break;
            case 9:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
