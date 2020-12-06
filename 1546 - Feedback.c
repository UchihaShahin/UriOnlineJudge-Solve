#include <stdio.h>

int main() {

 int i, j, n, a, b;

 scanf("%d", &n);

 for(i = 0; i < n; ++i)
 {
  scanf("%d", &a);

  for(j = 0; j < a; ++j)
  {
   scanf("%d", &b);

   if(b == 1){
    printf("Rolien\n");
   }else if(b == 2){
       printf("Naej\n");
   }else if(b == 3){
       printf("Elehcim\n");
   }else{
       printf("Odranoel\n");
   }
  }
 }

    return 0;
}
