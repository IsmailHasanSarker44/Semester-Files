#include<stdio.h>
#include<string.h>
int main()
{
    char inp[10000], ident[1000], assi, sub1[100], sub2[100], sign, end;
    int i,equalflag=0,signflag=0,s1=0, s2=0;
    int result = 34,x,y,l;

    scanf("%[^\n]", inp);
    l = strlen(inp);
    i =0;
    while(i<l)
    {
        if (inp[i]=='=' && equalflag!=1)
        {
            equalflag = 1;
            assi = inp[i];
        }
        else if(signflag == 0 && equalflag==1)
        {
            if (inp[i]=='+')
            {
                sign = inp[i];
                signflag=1;
            }
            else if (inp[i]=='-')
            {
                sign = inp[i];
                signflag=1;
            }
            else if (inp[i]=='*')
            {
                sign = inp[i];
                signflag=1;
            }
            else if (inp[i]=='/')
            {
                sign = inp[i];
                signflag=1;
            }
            else if (signflag==0)
            {
                sub1[s1]=inp[i];
                s1++;
            }
        }
        else if (signflag==1 && inp[i]!=';')
        {
            sub2[s2]=inp[i];
            s2++;
        }
        else if (inp[i]==';')
        {
            end = inp[i];
        }

        else
        {
            if (equalflag==0)
            {
                ident[i]=inp[i];
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

//    if (sign=='+')
//        result = x+y;
//    else if (sign=='-')
//        result = x-y;
//    else if (sign=='*')
//        result = x*y;
//    else if (sign=='/')
//        result = x/y;


    printf("assignment operator: %c\n",assi);
    printf("ident: %s\n",ident);
    printf("sign: %c\n",sign);
    printf("x: %d\n",x);
    printf("y: %d\n",y);
    printf("result: %d\n",result);
 return 0;
}

