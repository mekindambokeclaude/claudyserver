#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int nbrdevaleur=0,i=0,j=0,*table=NULL;
    printf("entrez nbre de valeur");
    scanf("%d", &nbrdevaleur);
    table=malloc(sizeof(int)*nbrdevaleur);
    while (i<nbrdevaleur)
        {
            printf("entez une valeur:");
            scanf("%d", &table[i]);
        i++;
    
        }
i=0;
while (i<nbrdevaleur)

{
printf("%d\t\n", table[i]);
i++;
}
i=0;
j=i+1;
while (i<nbrdevaleur)
{
    while (j<nbrdevaleur)
    {
        if (table[i]>table[j])
        {

        }
        
    }
    
    {
        /* code */
    }
    
}






        return 0;
 }
