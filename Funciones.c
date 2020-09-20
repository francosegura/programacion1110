#include "Funciones.h"

void normalizar(const char *cadenaANormalizar, char *cadenaNormalizada)
{
    int esMayuscula = 1, pasoPorLaComa = 0;
    while(*cadenaANormalizar)
    {
        if(*cadenaANormalizar != 32) {
            if(*cadenaANormalizar == 44)
            {
                esMayuscula = 1;
                *cadenaNormalizada = 44;
                cadenaNormalizada++;
                *cadenaNormalizada = 32;
                pasoPorLaComa = 1;
            }
            else
            {
                if(esMayuscula == 1 || pasoPorLaComa == 0)
                {
                    *cadenaNormalizada = toUpperCase(*cadenaANormalizar);
                    esMayuscula = 0;
                }
                else
                {
                    *cadenaNormalizada = toLowerCase(*cadenaANormalizar);
                }
            }
            cadenaNormalizada++;
        }
        cadenaANormalizar++;
    }
    *cadenaNormalizada = '\0';
}

char toUpperCase(char letra)
{
    if(letra > 96)
    {
        return letra - 32;
    }
    else
    {
        return letra;
    }
}

char toLowerCase(char letra)
{
    if(letra > 96)
    {
        return letra;
    }
    else
    {
        return letra + 32;
    }
}
