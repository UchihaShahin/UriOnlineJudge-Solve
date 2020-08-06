#include <stdio.h>

int main()
{
    double M[12][12],result=0.0;
    int i,j,c,z,k=1;
    char b[2];

    scanf("%s",b);
    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for (z=0;z<12;z++){
        for (c=k;c<12;c++){
            result+=M[z][c];

        }
        k++;
    }
    if (b[0]=='S'){
        printf("%.1lf\n",result);
    }
    else if (b[0]=='M'){
            result=result/66.0;
            printf("%.1lf\n",result);
    }
    return 0;
}
