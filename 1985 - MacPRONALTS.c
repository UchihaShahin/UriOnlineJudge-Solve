#include <stdio.h>
int main()
{
    int number;

    double amount = 0.00;
    int code, quantity;
    scanf("%d", &number);
    while(number--)
    {
        scanf("%d %d", &code, &quantity);
        if(code==1001)
            amount +=  quantity*1.50;
        else if(code==1002)
                amount +=  quantity*2.50;
        else if(code==1003)
                amount +=  quantity*3.50;
        else if(code==1004)
                amount += quantity*4.50;
        else if(code==1005)
                amount +=  quantity*5.50;
    }
    printf("%.2lf\n", amount);
    return 0;
}
