#include <stdio.h>
#include <ctype.h>

int main()
{
    char sentence[100];
    int i;

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '*';
        }
        else if (isdigit(sentence[i]))
        {
            sentence[i] = '?';
        }
        else if (isalpha(sentence[i]))
        {
            if (isupper(sentence[i]))
            {
                sentence[i] = tolower(sentence[i]);
            }
            else
            {
                sentence[i] = toupper(sentence[i]);
            }
        }
    }

    printf("Altered sentence: %s\n", sentence);

    return 0;
}
