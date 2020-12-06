#include<stdio.h>
int main()
{
    long long int n;
    int i;
    scanf("%lld",&n);
        while(n !=0){
            i = n % 10;
            n = n / 10;
            printf("%d",i);
        }
        printf("\n");

    return 0;
}
