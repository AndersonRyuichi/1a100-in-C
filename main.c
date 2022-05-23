#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que imprime cada número de 1 até 100 em uma nova linha.

// Para cada múltiplo de 3, imprima "Foo", ao invés do número.
// Para cada múltiplo de 5, imprima "Baa", ao invés do número.
// Para números múltiplos simultaneamente de 3 e 5, imprima "FooBaa", ao invés do número.

int main(){
    int cont;
    cont = 1;

    while(cont <= 100){
        if( (cont % 3 == 0) && (cont % 5 == 0) ){
            printf("FooBaa\n");
        }
        else if(cont % 3 == 0){
            printf("Foo\n");
        }
        else if(cont % 5 == 0){
            printf("Baa\n");
        }
        else{
            printf("%i\n", cont);
        }
    cont = cont + 1;
    }
    return 0;
}

