#include <stdio.h>

int student,n,reg_number;
double d,number;

int main(){
	scanf("%d",&student);
	while(student--){
		scanf("%d%lf",&reg_number,&number);
		if(number > d) d = number, n = reg_number;
	}
	if(d < 8.0)
        printf("Minimum note not reached\n");
	else printf("%d\n",n);
	return 0;
}
