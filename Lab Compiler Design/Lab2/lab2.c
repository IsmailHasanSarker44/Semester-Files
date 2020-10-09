#include<stdio.h>
#include<string.h>
int main()
{
    int countPositive=0,countNegative=0;
    char usersAns[100];
    char positive[100]="YES";
    char negative[100]="NO";
    char ques1[100] = "Having Cough?";
    char ques2[100] = "Having Fever?";
    char ques3[100] = "Having Tiredness?";
    char ques4[100] = "Having Breathing problem?";
    char ques5[100] = "Having Headache?";

    printf("*******Just say yes or no.*******\n");

    printf("QUESTION 01: %s\n",ques1);
    scanf("%s",usersAns);
    if(strcmp(strupr(usersAns),positive)==0)
    {
        countPositive++;
    }
    else if(strcmp(strupr(usersAns),negative)==0)
    {
        countNegative++;
    }

    printf("QUESTION 02: %s\n",ques2);
    scanf("%s",usersAns);
    if(strcmp(strupr(usersAns),positive)==0)
    {
        countPositive++;
    }
    else if(strcmp(strupr(usersAns),negative)==0)
    {
        countNegative++;
    }

    printf("QUESTION 03: %s\n",ques3);
    scanf("%s",usersAns);
    if(strcmp(strupr(usersAns),positive)==0)
    {
        countPositive++;

    }
    else if(strcmp(strupr(usersAns),negative)==0)
    {
        countNegative++;
    }

    printf("QUESTION 04: %s\n",ques4);
    scanf("%s",usersAns);
    if(strcmp(strupr(usersAns),positive)==0)
    {
        countPositive++;
    }
    else if(strcmp(strupr(usersAns),negative)==0)
    {
        countNegative++;
    }

    printf("QUESTION 05: %s\n",ques5);
    scanf("%s",usersAns);
    if(strcmp(strupr(usersAns),positive)==0)
        {
            countPositive++;
        }
    else if(strcmp(strupr(usersAns),negative)==0)
    {
        countNegative++;
    }


    printf("\n******* RESULT *******\n");
    if(countPositive==5)
        {
            printf("You may have Corona Virus. Stay at home and take rest.\n");
        }

    else
        {
            printf("You don't have Corona Virus. You just have %d syndromes\n",countNegative);
        }


}
