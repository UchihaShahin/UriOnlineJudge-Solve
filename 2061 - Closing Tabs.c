#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, i;
    char c[10];
    scanf("%d %d", &n, &m);
    int tab = n;
    for (i=1;i<=m;i++)
    {
        scanf("%s", c);
        if(c[0] == 'f'){
                tab++;
        }
        else tab--;
    }
    printf("%d\n", tab);
    return 0;
}
