#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, ans;
    scanf("%lf", &a);
    b = (1 + sqrt(5))/2.0;
    c = (1 - sqrt(5))/2.0;
    ans = (pow(b,a) - pow(c,a))/sqrt(5);
    printf("%.1lf\n", ans);
    return 0;
}
