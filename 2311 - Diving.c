#include <stdio.h>

int main()
{
    int n,i,j;
    double power,score,max,min,answer;
    char s[1000];
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        max=0.0,min=10.00,answer=0.0;
        scanf("%s", s);
        scanf("%lf",&power);
        for (j=1;j<=7;j++){
            scanf("%lf",&score);
            if (score>max) max=score;
            if (score<min) min=score;
            answer+=score;
        }
        answer-=(max+min);
        answer*=power;
        printf("%s %.2lf\n",s,answer);
    }

    return 0;
}
