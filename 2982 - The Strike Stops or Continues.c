#include <stdio.h>

int main()
{

    char c[2];
    int i, n, x, ans = 0;
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {

        scanf("%s %d", c, &x);
        if (c[0] == 'G')
            ans -= x;
        else
            ans += x;

    }

    if (ans >= 0)
        printf("A greve vai parar.\n");
    else
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");

    return 0;

}
