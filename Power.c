#include <stdio.h>

int main()
{
 int a=9,b,pow=1,i;

 printf("Digite o primeiro numero: ");
 scanf("%d",&a);
 printf("Digite o segundo numero: ");
 scanf("%d",&b);

 for(i=1;i<=b;i++)
     pow*=a;
 printf("%d",pow);

 return 0;
}