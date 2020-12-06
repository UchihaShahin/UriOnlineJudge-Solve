#include <stdio.h>
#include <string.h>

int main()
{
    int chicken,beef,pasta,total1=0,total2=0,total3=0;
    int chicken1,beef1,pasta1;
    int chicken2,beef2,pasta2;
    scanf("%d %d %d",&chicken,&beef,&pasta);
    scanf("%d %d %d",&chicken1,&beef1,&pasta1);

    chicken2=chicken-chicken1;
    beef2=beef-beef1;
    pasta2= pasta-pasta1;

    if (chicken2<0){
        total1= -(chicken2);
    }
    if (beef2<0){
        total2= -(beef2);
    }
    if (pasta2<0){
        total3= -(pasta2);
    }
    printf("%d\n",total1+total2+total3);
    return 0;
}
