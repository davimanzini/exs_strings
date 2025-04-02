#include <stdio.h>
#include <stdlib.h>



int main(){

    int count = 0;
    char string[100];

    printf("Digite uma string qualquer sem espacos: ");
    scanf("%s", string); //por que nao usar &?. porque string ja eh um ponteiro


    for(int i = 0; string[i]; i++){
        count ++;
    }

    printf("A string digitada tem %d caracteres\n", count);

    return 0;
}