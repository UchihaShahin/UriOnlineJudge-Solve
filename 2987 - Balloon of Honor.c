#include <stdio.h>
int main()
{
    int a, z;
    char c, str[27];

    scanf("%c", &c);
    for (a = 'A', z = 1; a <= 'Z'; a++, z++)
    {
        str[a] = z;
    }
    printf("%d\n", str[c]);

return 0;
}
