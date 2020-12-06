#include <stdio.h>

int main()
{
    double a,b,finall;
    scanf("%lf %lf", &a, &b);
    finall = (((b-a)*100.00)/a);
    printf("%.2lf%%\n", finall);

    return 0;
}
