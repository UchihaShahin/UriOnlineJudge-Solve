#include <stdio.h>
#include <string.h>
int main() {
    char b[10000];
    int a,length;
    scanf("%d",&a);
    //for (i=0;i<=a;i++){
    while (a--){
        //gets(b);
        scanf("%s",b);
        length= strlen(b);
        printf("%.2lf\n",length*.01);
    }

    return 0;
}
