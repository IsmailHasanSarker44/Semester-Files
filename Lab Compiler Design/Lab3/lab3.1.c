#include <stdio.h>
void main ()
{
    int num[30];

    int i, j, a, n;
    printf("How many numbers do you want to sort: ");
    scanf("%d", &n);

    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &num[i]);

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] < num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }

    printf("\nNumbers in descending order\n");

    for (i = 0; i < n; ++i)
    {
        printf("position = %d and number %d\n",(i+1),num[i]);
    }



}
