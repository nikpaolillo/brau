#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contPositivos=0;
    int acumPositivos=0;
    int contNegativos=0;
    int contPares=0;
    int contCeros=0;
    int acumNegativos=0;
    char respuesta;
    int promedioNeg;
    int promedioPos;
    int diferencia;
    int maximo;
    int minimo;
    int flag=0;

    do
    {

        printf ("ingrese numero: ");
        scanf ("%d",&numero);


        if (flag == 0){

            minimo = numero;
            maximo = numero;
            flag = 1;
        }

        if (numero > 0)
        {

            contPositivos++;
            acumPositivos = acumPositivos + numero;

        }

        else if (numero < 0)
        {

            contNegativos++;
            acumNegativos = acumNegativos + numero;


        }

        else
        {
            contCeros++;
        }

        if ( numero %2 == 0)
        {

            contPares++;
        }
        if (numero > maximo)
        {

            maximo = numero;
        }

        if (numero<minimo)
        {

            minimo = numero;

        }
        printf ("quiere seguir? ");

        fflush(stdin);
        respuesta = getchar();



    }
    while (respuesta != 'n');


    promedioNeg = acumNegativos/contNegativos;
    promedioPos = acumPositivos/contPositivos;
    diferencia = contPositivos - contNegativos;
    // printf("%d",acumNegativos);


    printf("La suma de los negativos es: %d \n",acumNegativos);
    /*printf("La suma de los positivos es: %d \n",acumPositivos);
    printf("La cantidad de negativos es: %d \n",contNegativos);
    printf("La cantidad de positivos es: %d \n",contPositivos);
    printf("La cantidad de ceros es: %d \n",contCeros);
    printf("La suma de los negativos es: %d \n",contPares);
    printf("La suma de los negativos es: %d \n",promedioNeg);
    printf("La suma de los negativos es: %d \n",promedioPos);
    printf("Minimo: %d \n",minimo);
    printf("maximo: %d \n",maximo);*/


    return 0;
}
