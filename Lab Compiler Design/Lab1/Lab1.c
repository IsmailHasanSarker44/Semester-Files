#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],numberArray[200];
    int i,flag=0,length, index=0;
    scanf("%[^\n]", &str);
    length = strlen(str);
    if (length == 0)
    {
        printf("Input is empty\n");
    }
    else
    {
        i= 1;
        while(i<=length)
        {
            if ((str[i-1] == '\\' ) && (str[i] == 'n'))
            {
                i+=2;
                printf("\n");
//                    printf("\nWe got a #new line# command in the input\n");
            }
            else if((str[i-1] >= 48) && (str[i-1]<= 57) && flag==0) //here I'm using ascii value instead of character.
            {
                numberArray[index] = str[i-1];
                index++;
            }
            else if ((str[i-1] =='\\') && (str[i] =='\\'))
            {
//                    printf("\nWe got #single line comment# command in the input\n");
                flag = 1;
            }
            else if ((str[i-1] =='\\') && (str[i] =='*'))
            {
//                    printf("\nWe got #multiple line comment starting# command in the input\n");
                flag = 1;
            }
            else if ((str[i-1] =='*') && (str[i] =='\\'))
            {
//                    printf("\nWe got #multiple line comment ending# command in the input\n");
                flag = 0;
                i+=2;
            }
            if(flag == 0)
            {
                printf("%c",str[i-1]);
            }
            i++;
        }

        if (index>0)
        {
            printf("\n\nHere are the numbers of your input: ");

            for (i=0; i<index; i++)
            {
                printf("%c ", numberArray[i]);
            }
        }

        printf("\n");
    }
    return 0;
}
