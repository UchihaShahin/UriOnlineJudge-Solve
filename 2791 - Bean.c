#include <stdio.h>

int main()
{
    int ara[5],i,position;
    for (i=0;i<=3;i++){
        scanf("%d",&ara[i]);
        if (ara[i]==1){
        position=i+1;
        }
    }
    printf("%d\n",position);

    return 0;
}
