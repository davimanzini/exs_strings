#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100];

    printf("Digite uma string qualquer sem espacos: ");
    scanf("%s", string);

    for(int i = strlen(string) - 1; i >= 0; i--){ //-1 pq o ultimo caracter eh o /0
        printf("%c", string[i]);
    }

    return 0;
}