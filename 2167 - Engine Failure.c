#include <stdio.h>
int main()
{
    int input,speed,count=0,result=0,temp=0,jodi_shoman=1;
    scanf("%d",&input);
    while (input--){
        scanf("%d",&speed);
        count++;
        if (speed<temp && jodi_shoman==1){
            result=count;
            jodi_shoman=0;
        }
        temp=speed;
    }
    printf("%d\n",result);

    return 0;
}
