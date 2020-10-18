#include<stdio.h>
#include<string.h>
int main()
{
    char input[10000], ident[1000], assi, sub1[100], sub2[100], sign, end;
    int i,equalflag=0,signflag=0,s1=0, s2=0;
    int result = 0,x,y,l;

    scanf("%[^\n]", input);
    l = strlen(input);
    i =0;
    while(i<l)
    {
        if (input[i]=='=' && equalflag!=1)
        {
            equalflag = 1;
            assi = input[i];
        }
        else if(signflag == 0 && equalflag==1)
        {
            if (input[i]=='+')
            {
                sign = input[i];
                signflag=1;
            }
            else if (input[i]=='-')
            {
                sign = input[i];
                signflag=1;
            }
            else if (input[i]=='*')
            {
                sign = input[i];
                signflag=1;
            }
            else if (input[i]=='/')
            {
                sign = input[i];
                signflag=1;
            }
            else if (signflag==0)
            {
                sub1[s1]=input[i];
                s1++;
            }
        }
        else if (signflag==1 && input[i]!=';')
        {
            sub2[s2]=input[i];
            s2++;
        }
        else if (input[i]==';')
        {
            end = input[i];
        }

        else
        {
            if (equalflag==0)
            {
                ident[i]=input[i];
            }
        }
        i++;
    }

    sscanf(sub1, "%d", &x);
    sscanf(sub2, "%d", &y);


    switch(sign)

    {

        case '+':
            result = x+y;
            break;
        case '-':
            result = x-y;
            break;
        case '*':
            result = x*y;
            break;
        case '/':
            result = x/y;
            break;
        default:
            result = 0;

    }

    printf("Identifier : %s\n",ident);
    printf("Assignment operator: %c\n",assi);
    printf("First variable: %d\n",x);
    printf("sign : %c\n",sign);
    printf("Second variable: %d\n",y);
    printf("result: %d\n",result);

 return 0;
}

