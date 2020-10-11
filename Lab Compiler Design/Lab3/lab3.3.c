#include <stdio.h>
#include<string.h>

int main()
{
    char mainString[80]="a*abba*b+";
    char subString[80];

    int length, i, j=0;

    printf("Enter a substring: ");
    gets(subString);
    printf("\nHere is the result: ");
    length = strlen(subString);

    for (i = 0; mainString[i] != '\0' && subString[j] != '\0'; i++)
    {
        if (mainString[i] == subString[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }
    int pos = i - j;

    if (j == length)
    {
        printf("Substring found!\n");
        printf("\nSubstring's index position is [%d to %d]\n", pos,pos+length-1);
    }
    else
    {
        printf("Substring not found\n");
    }

    return 0;
}
