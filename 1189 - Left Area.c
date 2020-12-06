#include <stdio.h>

int main()
{
    double M[12][12],result=0.0;
    int i,j,c,z,k=0,l=4;
    char b[2];

    scanf("%s",b);
    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for (z=1;z<11;z++){
        if(z<=5){
             for (c=0;c<=k;c++){
                result+=M[z][c];

             }
             k++;
        }
        else if (z>=6){
            for (c=0;c<=l;c++){
               result+=M[z][c];

            }
            l--;
        }

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
