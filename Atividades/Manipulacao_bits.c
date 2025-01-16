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
    print_binario(num1);
    printf("Número Binário 2: ");
    print_binario(num2);

    unsigned char comparison = 0;
    for (int i = 0; i < 8; i++) {
        unsigned char bit1 = (num1 >> i) & 1;
        unsigned char bit2 = (num2 >> i) & 1;
        comparison |= ((bit1 == bit2) << i);
    }
    printf("\nComparação bit a bit: ");
    print_binario(comparison);

    unsigned char leftShift = num1 << 1;
    printf("Deslocamento à esquerda: ");
    print_binario(leftShift);

    unsigned char rightShift = num1 >> 1;
    printf("Deslocamento à direita: ");
    print_binario(rightShift);

    if (num1 & 1) {  
        printf("\nO bit menos significativo é 1.\n");
        unsigned char inverted = ~num1;
        printf("Invertendo todos os bits...\n");
        printf("Número invertido: ");
        print_binario(inverted);
    } else {
        printf("\nO bit menos significativo está inativo.\n");
    }

    return 0;
}
