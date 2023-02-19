#include <iostream>
#include <cstring>

extern "C" {
    #include "fatorial.c"
}

int main() {
    int numSelect;
    int resultado;

    std::cout << "Digite um Valor:\n";

    std::cin >> numSelect;

    resultado = calcular(numSelect);

    std::cout << "Resultado é: \n" << resultado << std::endl;
    return 0;
}