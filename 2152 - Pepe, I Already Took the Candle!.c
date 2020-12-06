#include <stdio.h>
#include <string.h>
int main() {

    int a,h,m,s;
    scanf("%d",&a);
    while (a--){
        scanf("%d%d%d",&h,&m,&s);
        if (s==1){
            printf("%.2d:%.2d - A porta abriu!\n",h,m);
        }
        if (s==0){
            printf("%.2d:%.2d - A porta fechou!\n",h,m);
        }
    }

    return 0;
}
