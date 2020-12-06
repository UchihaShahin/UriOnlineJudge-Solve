#include <stdio.h>

int main()
{
    int a,visitor=0,car=0;
    char c[10];
    while (c[0]!='A'){
        scanf("%s ",c);
        scanf("%d",&a);
        if (c[0]=='S'){
            visitor+=a;
            car++;
        }
        if (c[0]=='V'){
            visitor-=a;
            car--;
        }

    }
    printf("%d\n%d\n",visitor,car);

    return 0;
}
