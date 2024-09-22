#include <stdio.h>

int main() {
    int n, i, j, vencedor = 0;
    char nomes[100][101], tempNome[101];
    int numeros[100], tempNumero;
    float tempos[100], tempTempo;

    // Leitura da quantidade de pilotos
    scanf("%d", &n);

    // Leitura dos dados de cada piloto
    for (i = 0; i < n; i++) {
        scanf("%s %d %f", nomes[i], &numeros[i], &tempos[i]);
        if (tempos[i] < tempos[vencedor] || i == 0) {
            vencedor = i;
        }
    }

    // Imprime o vencedor
    printf("Vencedor: %s %d\n", nomes[vencedor], numeros[vencedor]);

    // Ordena os pilotos pelo tempo de corrida usando Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tempos[j] > tempos[j + 1]) {
                // Troca dos tempos
                tempTempo = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = tempTempo;

                // Troca dos números
                tempNumero = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = tempNumero;

                // Troca dos nomes manualmente
                for (int k = 0; k < 101; k++) {
                    tempNome[k] = nomes[j][k];
                    nomes[j][k] = nomes[j + 1][k];
                    nomes[j + 1][k] = tempNome[k];
                }
            }
        }
    }

    // Imprime a lista de todos os pilotos em ordem crescente de tempo
    for (i = 0; i < n; i++) {
        printf("%s %d %.2f\n", nomes[i], numeros[i], tempos[i]);
    }

    return 0;
}
