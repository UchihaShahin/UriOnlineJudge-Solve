#include <stdio.h>
int main()
{
    int a,b,i,count=0;
    scanf("%d",&a);
    for (i=1;i<=5;i++){
        scanf("%d",&b);
        if (b==a)
            count++;
    }
    printf("%d\n",count);

    return 0;
}
