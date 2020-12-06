#include <stdio.h>

int main()
{
    int a, dabriel, gabriel, attack1, attack2, defence1, defence2, level1, level2, bonus;
    scanf("%d", &a);
    while(a--)
    {
        scanf("%d", &bonus);
        scanf("%d %d %d", &attack1, &defence1, &level1);
        scanf("%d %d %d", &attack2, &defence2, &level2);
        dabriel = (attack1+defence1)/2;
        if(level1%2==0) dabriel += bonus;
        gabriel = (attack2+defence2)/2;
        if(level2%2==0) gabriel += bonus;
        if(dabriel == gabriel){
                printf("Empate\n");
        }
        else if (dabriel > gabriel){
                printf("Dabriel\n");
        }
        else printf("Guarte\n");
    }
    return 0;
}
