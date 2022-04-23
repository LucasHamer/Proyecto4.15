#include<stdio.h>
#include<stdlib.h>

int main()
{
    int dvd,resto,unidades,caja10,caja50;
    float descuento,precio;
    printf("Ingrese la cantidad de DVDs a comprar: ");
    scanf("%d",&dvd);

    if(dvd>=1 && dvd<=500)
    {
        caja50=dvd/50;
        resto=dvd%50;
        caja10=resto/10;
        unidades=resto%10;

        precio=(float)(caja10*120)+(caja50*500)+(unidades*15);

    if(dvd>100)
    {
        descuento=(float)precio*0.10;
        precio=precio-descuento;
        printf("\nDescuento por compra mayor (10%%) aplicado!\n");
        printf("\nEl importe a pagar es: $%.2f \n\n", precio);
    }
        printf("\nEl importe a pagar es: $%.2f \n\n", precio);
    }
    else
    {
        printf("\nNumero incorrecto. Intente de nuevo.\n\n");
    }

    return 0;
}
