#ifndef EJERCICIOS_H_INCLUDED
#define EJERCICIOS_H_INCLUDED
#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN "\x1b[36m"
#define COLOR_RESET "\x1b[0m"
#define EJERCICIOS 1
#define STRING_SIZE 100
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "Funciones.h"

int obtenerEjercicio(char ejercicios[][STRING_SIZE]);
void ejecutarEjercicio(int ejercicioElegido);
void ejercicioUno();

#endif // EJERCICIOS_H_INCLUDED
