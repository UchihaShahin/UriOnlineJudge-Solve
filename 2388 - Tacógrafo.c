#include <stdio.h>
int main()
{
    int a,b,c,result=0,result1=0;
    scanf("%d",&a);
    while(a--){
        scanf("%d%d",&b,&c);
        result=b*c;
        result1=result+result1;
    }

    printf("%d\n",result1);

    return 0;
}
