#include <stdio.h>
int main()
{
    int a,i,c;
    char ara[1000];
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        scanf("%s",ara);
        scanf("%d", &c);
        if(ara[0]=='T' && ara[1]=='h' && ara[2]=='o' && ara[3]=='r')
            printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
