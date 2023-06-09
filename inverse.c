#include<stdio.h>
#include<stdlib.h>
void remplace(int*a,int*b);
int main(void)
{
int a=0,b=0;
remplace(&a,&b);

return 0;
}
void remplace(int*a,int*b)
{
    int change=0;
    printf("entrez valeur de a: ");
    scanf("%d", a);
 printf("entrez valeur de b: ");
    scanf("%d", b);
    change=*a;
    *a=*b;

    *b=change;
    printf("nouvelle valeure de a est %d\n",*a);
    printf("nouvelle valeure de b est %d\n",*b);
  
  }
