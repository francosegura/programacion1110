#include "Ejercicios.h"

int main()
{
    char ejercicios[EJERCICIOS][STRING_SIZE] =
    {
        "Mostrar tabla ASCII."
    };
    char nombreEjercicio[STRING_SIZE] = "Nombre";
    int ejercicioElegido, flag = 0;
    system("cls");
    printf(COLOR_MAGENTA "%s \n\n" COLOR_RESET, nombreEjercicio);
    ejercicioElegido = obtenerEjercicio(ejercicios);
    ejecutarEjercicio(ejercicioElegido);
    printf("\n\n");
    system("pause");
    system("cls");
    printf("Le gustaria ejecutar otra vez?\n\n 1 - Si\n 0 - No\n\n");
    flag = obtenerNumeroEntre(0, 1);
    while(flag != 0)
    {
        system("cls");
        ejercicioElegido = obtenerEjercicio(ejercicios);
        ejecutarEjercicio(ejercicioElegido);
        printf("\n\n");
        system("pause");
        system("cls");
        printf("Le gustaria ejecutar otra vez?\n\n 1 - Si\n 0 - No\n\n");
        flag = obtenerNumeroEntre(0, 1);
    }
    return 0;
}
