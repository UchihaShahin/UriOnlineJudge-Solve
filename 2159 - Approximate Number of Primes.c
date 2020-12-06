#include <stdio.h>
#include<math.h>
int main() {

    int a;
    double first,second;
    scanf("%d",&a);
    first= a/log(a);
    second= (1.25506*a)/ log(a);
    printf("%.1lf %.1lf\n",first,second);
    return 0;
}
