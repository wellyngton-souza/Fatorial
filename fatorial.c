#include <stdio.h>

int calcular(int A) {
    int i;
    int valorResultado = 1;

    for(i = 1; i <= A; i++){
        valorResultado = valorResultado * i;
    }

    return valorResultado;
}