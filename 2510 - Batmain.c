#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,length;
    char str[100];
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%s",str);
        length=strlen(str);

         if(length >=0 && length<=25){
            printf("Y\n");
        }
        else{

            printf("N\n");
        }

    }
    return 0;
}
