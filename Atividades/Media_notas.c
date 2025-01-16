#include <stdio.h>
#include <stdlib.h>

int main() {
float n1, n2, media;

printf("Digite a primeira nota:\n>");
scanf("%f", &n1);

printf("Digite a segunda nota:\n>");
scanf("%f", &n2);

media = (n1 + n2) / 2;

printf("Tipo de dado ultilizado: %zu bytes\n", sizeof(media));

printf("Média: %.2f \n", media);
if (media >= 5) {
printf("Status: Aprovado\n");
} else {
printf("Status: Reprovado\n");
}

return 0;
}