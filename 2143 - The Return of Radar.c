#include <stdio.h>

int main()
{
    int a, i, n;
    while(a!=0)
    {
        scanf("%d", &a);
        for(i=1; i<=a; i++)
        {
            scanf("%d", &n);
            if(n%2)
                printf("%d\n", n*2-1);
            else
                printf("%d\n", n*2-2);
        }
    }
    return 0;
}
