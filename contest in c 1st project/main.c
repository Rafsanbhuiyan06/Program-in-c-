/*#include <stdio.h>

int main()
{
    int i, j, N=5;
    int count;

    scanf("%d", &N);

    count = N * 2 - 1;

    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}*/


#include <stdio.h>

int main()
{
    int i, j, t, N[100];
    int count;
    scanf("%d", &t);
    for(int z = 0; z < t; z++)
        scanf("%d", &N[z]);
    for(int y = 0; y < t; y++)
    {
        count = N[y];

        for(i=1; i<=count; i++)
        {
            for(j = 1; j <= count; j++)
            {
                if(j==i || (j==count - i + 1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
