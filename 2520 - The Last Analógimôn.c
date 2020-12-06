#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,x,y,ans[101][101],result = 0;
    while(scanf("%d %d",&x,&y)!= EOF)
        {
        for(i=0;i<x;i++)
            {
            for(j=0;j<y;j++)
                {
                scanf("%d",&ans[i][j]);
                    if(ans[i][j] == 1)
                    {
                        a = i;
                        b = j;
                    }
                    if(ans[i][j] == 2)
                    {
                        c = i;
                        d = j;
                    }
                }
            }

           result = abs(d - b) + abs(c - a);
           printf("%d\n",result);
        }
return 0;
}
