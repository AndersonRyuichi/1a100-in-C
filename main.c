#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que imprime cada n�mero de 1 at� 100 em uma nova linha.

// Para cada m�ltiplo de 3, imprima "Foo", ao inv�s do n�mero.
// Para cada m�ltiplo de 5, imprima "Baa", ao inv�s do n�mero.
// Para n�meros m�ltiplos simultaneamente de 3 e 5, imprima "FooBaa", ao inv�s do n�mero.

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

