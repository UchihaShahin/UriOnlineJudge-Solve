#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d", &a, &b)!=EOF)
        {
            c=a/30;
            d=b/6;
            printf("%.2d:%.2d\n",c,d);
        }
    return 0;
}
