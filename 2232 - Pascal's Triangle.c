#include <stdio.h>
#include <math.h>

int main()
{
    int a,i,b,sum=0;
    scanf("%d",&a);
    while (a--){
        scanf ("%d",&b);
        for (i=0,sum=0;i<b;i++){
            sum+=pow(2,i);
        }
        printf("%d\n",sum);
    }
    return 0;
}
