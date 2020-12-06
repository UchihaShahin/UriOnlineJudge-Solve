#include <stdio.h>

int main()
{
    int a,b,c,gain=0;
    scanf("%d",&a);
    while (a--){
        scanf("%d %d",&b,&c);
        gain= (b%c)+(b/c);
        printf("%d\n",gain);
    }

    return 0;
}
