#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,i;
    double service,block,attack,service2,block2,attack2;
    double ans1,ans2,ans3;
    char s[10000];
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        scanf("%s",s);
        scanf("%d %d %d",&b,&c,&d);
        scanf("%d %d %d",&e,&f,&g);
        service+=b;block+=c;attack+=d;
        service2+=e;block2+=f;attack2+=g;
    }
    ans1= (service2/service)*100.00;
    ans2= (block2/block)*100.00;
    ans3= (attack2/attack)*100.00;
    printf("Pontos de Saque: %.2lf %%.\n", ans1);
    printf("Pontos de Bloqueio: %.2lf %%.\n", ans2);
    printf("Pontos de Ataque: %.2lf %%.\n", ans3);
    return 0;
}
