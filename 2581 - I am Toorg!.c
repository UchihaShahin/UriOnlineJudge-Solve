#include <stdio.h>
#include <string.h>

int main()
{
    int a,i;
    char question[1000];
    scanf("%d",&a);
    for (i=1;i<=a;i++){
    //while (a--){
        gets(question);
        if (i!=0)
            printf("I am Toorg!\n");
    }

    return 0;
}
