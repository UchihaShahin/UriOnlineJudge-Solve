#include <stdio.h>
int main()
{
    int a,b,year,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        if (b<2015){
            year=2015-b;
            printf("%d D.C.\n",year);
        }
        else {
            year= b-2014;
            printf("%d A.C.\n",year);
        }
    }

    return 0;
}
