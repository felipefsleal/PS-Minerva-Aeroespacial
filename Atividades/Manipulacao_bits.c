#include <stdio.h>

void print_binario(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned char num1 = 0b10110011;  
    unsigned char num2 = 0b11010101; 

    printf("Número Binário 1: ");
    printBinary(num1);
    printf("Número Binário 2: ");
    printBinary(num2);

    unsigned char comparison = num1 ^ num2;
    printf("Comparação bit a bit: ");
    printBinary(comparison);

    unsigned char leftShift = num1 << 1;
    printf("Deslocamento à esquerda: ");
    printBinary(leftShift);

    unsigned char rightShift = num1 >> 1;
    printf("Deslocamento à direita: ");
    printBinary(rightShift);

    if (num1 & 1) {  
        printf("O bit menos significativo é 1.\n");
        unsigned char inverted = ~num1;
        printf("Invertendo todos os bits...\n");
        printf("Número invertido: ");
        printBinary(inverted);
    } else {
        printf("O bit menos significativo está inativo.\n");
    }

    return 0;
}
