#include <stdio.h>
int main()
{
    int num, i, a, count1=0, count2=0, count3=0, count4=0;
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        scanf("%d", &a);
        if(a % 2 == 0) count1++;
        if(a % 3 == 0) count2++;
        if(a % 4 == 0) count3++;
        if(a % 5 == 0) count4++;
    }
    printf("%d Multiplo(s) de 2\n", count1);
    printf("%d Multiplo(s) de 3\n", count2);
    printf("%d Multiplo(s) de 4\n", count3);
    printf("%d Multiplo(s) de 5\n", count4);
    return 0;
}
