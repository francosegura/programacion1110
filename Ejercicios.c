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
    while(ejercicio < 1 && ejercicio > EJERCICIOS);
    return ejercicio;
}

void ejecutarEjercicio(int ejercicioElegido)
{
    switch(ejercicioElegido)
    {
    case 1:
        ejercicioUno();
        break;
    case 2:
        ejercicioDos();
        break;
    default:
        printf("No existe el ejercicio %d", ejercicioElegido);
    }
}

void ejercicioUno()
{
    system("cls");
    printf("Tabla ASCII");
    printf("\nDecimal\tOctal\tHexadecimal\tCaracter");
    int i, j;
    for(i = 33; i < 127; i++){
        printf("\n");
        for(j = 0; j < 4; j++) {
            if(j == 0) printf("%d", i);
            if(j == 1) printf("\t%o", i);
            if(j == 2) printf("\t%X", i);
            if(j == 3) printf("\t\t%c", i);
        }
    }
}

void ejercicioDos()
{
    system("cls");
    printf("Normalizar una cadena");
    char cadenaANormalizar[STRING_SIZE] = "     agUaNtE   ,  bOcA   ";
    char cadenaNormalizada[STRING_SIZE];
    printf("\nNormalizaremos la cadena: %s", cadenaANormalizar);
    normalizar(cadenaANormalizar, cadenaNormalizada);
    printf("\nCadena a normalizar: %s", cadenaANormalizar);
    printf("\nCadena normalizada: %s", cadenaNormalizada);
}
