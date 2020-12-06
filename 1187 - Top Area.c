#include <stdio.h>

int main()
{
    double M[12][12],result=0.0;
    int i,j,c,z,k=10,l=1;
    char b[2];

    scanf("%s",b);
    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for (z=0;z<5;z++){
        for (c=l;c<=k;c++){
            result+=M[z][c];

        }
     k--;
     l++;
    }
    if (b[0]=='S'){
        printf("%.1lf\n",result);
    }
    else if (b[0]=='M'){
            result=result/30.0;
            printf("%.1lf\n",result);
    }
    return 0;
}
