#include <stdio.h>

int main()
{
    int a[100],i;
    //while (1){
    for (i=0;;i++){
            scanf("%d",&a[i]);
            if (a[i]>a[0]){
                a[0]=a[i];
            }
        if (a[i]==0)break;
    }
    printf("%d\n",a[0]);
    return 0;
}
