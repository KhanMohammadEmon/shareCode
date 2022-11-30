#include <stdio.h>

int main()
{
    int number, i, k, count = 1,count1 = 1;

    printf("Enter number of rows: \n");
    scanf("%d", &number);
    number = (number/2)+1;
    count = number - 1;
    count1 = number-1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
            printf("_");
        count--;


        for (i = 1; i <= 2 * k - 1; i++)
        {
            if(k == 1||k==2||k==number)
            {
                printf("$");
            }
            else
            {
                if(i==1|| i==(2 * k)/2|| i== 2 * k - 1  )
                {
                    printf("$");
                }
                else
                {
                    printf("_");
                }
            }

        }



        for (i = 1; i <= count1; i++)
            printf("_");
        count1--;
        printf("\n");
    }
    count = 1;
    count1 = 1;
    for (k = 1; k <= number - 1; k++)
    {
        for (i = 1; i <= count; i++)
            printf("_");
        count++;
        for (i = 1 ; i <= 2 *(number - k)-  1; i++)

        {
             if(k == number-2||k==number-1)
            {
                printf("$");
            }
            else
            {
                if(i==1|| i==2 *(number - k)/2|| i== 2 *(number - k)-  1  )
                {
                    printf("$");
                }
                else
                {
                    printf("_");
                }
            }
        }
           // printf("$");
        for (i = 1; i <= count1; i++)
            printf("_");
        count1++;
        printf("\n");
    }
    return 0;
}
