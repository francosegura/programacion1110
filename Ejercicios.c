#include "Ejercicios.h"

int obtenerEjercicio(char ejercicios[][STRING_SIZE])
{
    int ejercicio, i;
    printf("Por favor seleccione un ejercicio a ejecutar: \n");
    for(i = 0; i < EJERCICIOS; i++)
    {
        printf("\n %d. %s", i + 1, ejercicios[i]);
    };
    printf("\n\n\n");
    do
    {
        printf("\nEjercicio: ");
        scanf("%d", &ejercicio);
    }
    while(ejercicio < 1 || ejercicio > EJERCICIOS);
    return ejercicio;
}

void ejecutarEjercicio(int ejercicioElegido)
{
    switch(ejercicioElegido)
    {
//    case 1:
//        ejercicioUno();
//        break;
    default:
        printf("No existe el ejercicio %d", ejercicioElegido);
    }
}
//
//void ejercicioUno()
//{
//    system("cls");
//    printf(COLOR_BLUE "Ingrese un numero para obtener su factorial. Recuerde que el mismo no puede ser un numero negativo.\n\n\n" COLOR_RESET);
//    int numero = obtenerEnteroPositivo();
//    int factorial = obtenerFactorial(numero);
//    printf("\n\nEl factorial del numero %d es: %d", numero, factorial);
//}
