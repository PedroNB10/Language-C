#include <stdio.h>

int main() {
    int qtd_pecas, horas, minutos, segundos;
    printf("Informe a quantidade de peças a serem produzidas: ");
    scanf("%d", &qtd_pecas);
    int tempo_total = qtd_pecas * 17;
    horas = tempo_total / 3600;
    minutos = (tempo_total % 3600) / 60;
    segundos = tempo_total % 60;
    printf("%d %d %d\n", horas, minutos, segundos);
    return 0;
}
