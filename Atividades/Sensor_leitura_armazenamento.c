#include <stdio.h>
#include <stdint.h>

#define ENDERECO_SENSOR1 0x75
#define ENDERECO_SENSOR2 0x76

typedef struct {
    uint32_t endereco; 
    double leituras[5];  
} SENSOR;

double calcular_media(double *leituras, int tamanho) {
    double soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += leituras[i];
    }
    return soma / tamanho;
}

void exibir_dados_sensor(SENSOR sensor, double media) {
    printf("Endereço do sensor: 0x%x\n", sensor.endereco);
    printf("Leituras de temperatura: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", sensor.leituras[i]);
    }
    printf("\nMédia da temperatura: %.2f°C\n", media);
    printf("Situação térmica: %s\n", (media >= 30.0) ? "Calor" : "Temperatura normal");
    printf("\n");
}

int main() {
    double leituras_sensor1[5] = {29.5, 30.2, 28.9, 31.0, 30.5};
    double leituras_sensor2[5] = {25.0, 26.8, 27.5, 28.2, 24.7};

    SENSOR sensor1 = {ENDERECO_SENSOR1};
    SENSOR sensor2 = {ENDERECO_SENSOR2};

    for (int i = 0; i < 5; i++) {
        sensor1.leituras[i] = leituras_sensor1[i];
        sensor2.leituras[i] = leituras_sensor2[i];
    }

    double media_sensor1 = calcular_media(sensor1.leituras, 5);
    double media_sensor2 = calcular_media(sensor2.leituras, 5);

    printf("Dados do Sensor 1:\n");
    exibir_dados_sensor(sensor1, media_sensor1);

    printf("Dados do Sensor 2:\n");
    exibir_dados_sensor(sensor2, media_sensor2);

    return 0;
}
