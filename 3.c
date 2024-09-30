// 3-

#include <stdio.h>
#include <float.h>

struct Faturamento {
    int dia;
    double valor;

};  struct Faturamento faturamentos[] = {
    {1, 22174.1664}, {2, 24537.6698}, {3, 26139.6134}, {4, 0.0}, {5, 0.0},
    {6, 26742.6612}, {7, 0.0}, {8, 42889.2258}, {9, 46251.174}, {10, 11191.4722},
    {11, 0.0}, {12, 0.0}, {13, 3847.4823}, {14, 373.7838}, {15, 2659.7563},
    {16, 48924.2448}, {17, 18419.2614}, {18, 0.0}, {19, 0.0}, {20, 35240.1826},
    {21, 43829.1667}, {22, 18235.6852}, {23, 4355.0662}, {24, 13327.1025},
    {25, 0.0}, {26, 0.0}, {27, 25681.8318}, {28, 1718.1221}, {29, 13220.495},
    {30, 8414.61}
};

int main() {

    int num_dias = sizeof(faturamentos) / sizeof(faturamentos[0]);
    double menor_valor = DBL_MAX, maior_valor = DBL_MIN, soma_faturamento = 0.0;
    int dias_com_faturamento = 0;

    for (int i = 0; i < num_dias; i++) {
        if (faturamentos[i].valor > 0) {
            if (faturamentos[i].valor < menor_valor) {
                menor_valor = faturamentos[i].valor;
            }
            if (faturamentos[i].valor > maior_valor) {
                maior_valor = faturamentos[i].valor;
            }
            soma_faturamento += faturamentos[i].valor;
            dias_com_faturamento++;
        }
    }

    double media_faturamento = soma_faturamento / dias_com_faturamento;

    int dias_acima_da_media = 0;
    for (int i = 0; i < num_dias; i++) {
        if (faturamentos[i].valor > media_faturamento) {
            dias_acima_da_media++;
        }
    }

    printf("Menor valor de faturamento: %.2f\n", menor_valor);
    printf("Maior valor de faturamento: %.2f\n", maior_valor);
    printf("Número de dias com faturamento acima da média: %d\n", dias_acima_da_media);

    return 0;
}
