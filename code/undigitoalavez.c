#include "stdio.h"

void main ()
{
    int i=0,b=0,repetir=0;

    printf("Ingrese la cantidad de repeticiones: ");

    scanf("%d",&repetir);

    for(i=0;i<=repetir;i++)
    {
        for(b=0;b<=i;b++)
        {
            printf("+");
        }
        printf(" ");
    }
}