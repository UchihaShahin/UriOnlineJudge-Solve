#include <stdio.h>

int main()
{
    int a,b,c,broke=0;
    scanf("%d",&a);
    while (a--){
        scanf ("%d %d",&b,&c);
        if (b>c){
           broke+=c;
        }
    }
    printf("%d\n",broke);
    return 0;
}
