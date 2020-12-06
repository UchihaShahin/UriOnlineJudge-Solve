#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[128];
    while(gets(a))
    {
        for(i = 0; i < strlen(a); i++)
        {
            if(a[i] == ',')
			printf("\n");
            else
			printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0;
}
