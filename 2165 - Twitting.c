#include <stdio.h>
#include<string.h>
int main() {

    char a[501];
    int length;
    gets(a);
    length= strlen(a);
    if (length>140){
        printf("MUTE\n");
    }
    else printf("TWEET\n");
    return 0;
}
