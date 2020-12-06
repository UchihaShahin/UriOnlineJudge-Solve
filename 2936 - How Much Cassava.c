#include <stdio.h>
int main()
{
    int khaddo[5] = { 300, 1500, 600, 1000, 150 };
    int a, ans=0, i;
    for (i = 0; i < 5; ++i)
        scanf("%d", &a), ans += a * khaddo[i];
    ans += 225;
    printf("%d\n", ans);

    return 0;
}
