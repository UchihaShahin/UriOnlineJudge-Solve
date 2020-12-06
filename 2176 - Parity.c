#include <stdio.h>
#include <string.h>
int main()
{
    char a[150];
    int i, count=0;
    scanf("%s", a);
    for(i=0; a[i]; i++)
        if(a[i]=='1')
            count++;
    if(count%2 == 0)
        a[i] = '0';
    else
        a[i] = '1';
    a[i+1] = '\0';
    printf("%s\n", a);
    return 0;
}
