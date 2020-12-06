#include <stdio.h>
int main()
{
    int a, i, j;
    scanf("%d", &a);
    int ara[a+1][a+1];
    for(i=0; i<=a; i++)
        for(j=0; j<=a; j++)
            scanf("%d", &ara[i][j]);
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            if(ara[i][j]+ara[i][j+1]+ara[i+1][j]+ara[i+1][j+1] < 2)
                printf("U");
            else printf("S");
        }
        printf("\n");
    }

    return 0;
}
