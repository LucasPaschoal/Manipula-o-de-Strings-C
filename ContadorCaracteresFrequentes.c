#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) 
{
    int i;
    char texto[82];
    char *p;
    int frequencia[256];
    char caractere;
    int maiorFrequencia = 0x80000000; 
    fflush(stdin);
    printf("Digite um texto:\n");
    fgets(texto, 80, stdin);

    for (i = 0; i < 256; ++i)
    {
        frequencia[i] = 0;
    }
    p = texto;
    while (*p) {
        ++frequencia[*p++];
    }

    for (i = 0; i < 256; ++i) 
    {
        if (frequencia[i] > maiorFrequencia)
        {
            maiorFrequencia = frequencia[i];
            caractere = (char)i;
        }
    }

    switch (caractere)
    {
        case '\n':
            strcpy(texto, "Quebra de linha");
            break;
        case ' ':
            strcpy(texto, "Espaco");
            break;
        default:
            texto[0] = '"';
            texto[1] = caractere;
            texto[2] = '"';
            texto[3] = '\0';
            break;
    }
    printf("O caractere com maior frequencia e %s, com frequencia %d\n",
        texto, maiorFrequencia);

    return 0;
}

