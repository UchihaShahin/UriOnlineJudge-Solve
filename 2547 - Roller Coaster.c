#include<stdio.h>
int main()
{
    int i,a,b,c,heights,count;
    while(scanf("%d",&a)!=EOF){
        count=0;
        scanf("%d %d",&b, &c);
        for(i = 0;i < a;i++){
            scanf("%d",&heights);
            if(heights>=b && heights <= c)
                count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
