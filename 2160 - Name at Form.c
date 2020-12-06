#include <stdio.h>
#include<string.h>
int main() {

    char a[600];
    int length;
    gets(a);
    length= strlen(a);
    if (length>80){
        printf("NO\n");
    }
    else printf("YES\n");
    return 0;
}
