//4- 

#include <stdio.h>

void main() {

    float faturamentoSP = 67836.43, faturamentoRJ = 36678.66, faturamentoMG = 29229.88, faturamentoES = 27165.48, faturamentoOutros = 19849.53, faturamentoTotal;

    faturamentoTotal = faturamentoSP + faturamentoRJ + faturamentoMG + faturamentoES + faturamentoOutros;

    // Cálculo dos percentuais
    float percentualSP = (faturamentoSP / faturamentoTotal) * 100;
    float percentualRJ = (faturamentoRJ / faturamentoTotal) * 100;
    float percentualMG = (faturamentoMG / faturamentoTotal) * 100;
    float percentualES = (faturamentoES / faturamentoTotal) * 100;
    float percentualOutros = (faturamentoOutros / faturamentoTotal) * 100;

    // Exibição dos resultados
    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", percentualSP);
    printf("RJ: %.2f%%\n", percentualRJ);
    printf("MG: %.2f%%\n", percentualMG);
    printf("ES: %.2f%%\n", percentualES);
    printf("Outros: %.2f%%\n", percentualOutros);
    
}
