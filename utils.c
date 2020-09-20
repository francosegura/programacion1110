#include "utils.h"

int obtenerEnteroPositivo()
{
    int numero, error = 0;
    do
    {
        if(error != 0)
        {
            printf("\n\nNumero incorrecto. Recuerde que debe ser mayor o igual a cero.");
            error = 0;
        }
        printf("\n\n\nIngrese un numero mayor a cero: ");
        scanf("%d", &numero);
        if(numero < 0) error = 1;
    }
    while(numero < 0);
    return numero;
}

int obtenerNumeroMayorOIgualA(int numero)
{
    int numeroMayor, error = 0;
    do
    {
        if(error != 0)
        {
            printf("\n\nNumero incorrecto. Recuerde que debe ser mayor o igual a %d.", numero);
            error = 0;
        }
        printf("\n\n\nIngrese un numero mayor a %d: ", numero);
        scanf("%d", &numeroMayor);
        if(numeroMayor < numero) error = 1;
    }
    while(numeroMayor < numero);
    return numeroMayor;
}

int obtenerNumeroEntre(int numeroUno, int numeroDos)
{
    int numeroEntre, error = 0;
    do
    {
        if(error != 0)
        {
            printf("\n\nNumero incorrecto. Recuerde que debe estar entre %d y %d.", numeroUno, numeroDos);
            error = 0;
        }
        printf("\n\n\nIngrese entre %d y %d: ", numeroUno, numeroDos);
        scanf("%d", &numeroEntre);
        if(numeroEntre < numeroUno || numeroEntre > numeroDos) error = 1;
    }
    while(numeroEntre < numeroUno || numeroEntre > numeroDos);
    return numeroEntre;
}
