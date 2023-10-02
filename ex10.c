#include <stdio.h>
#include <string.h>

int main() {
    int codigo_cidade;
    char estado[3];
    int num_veiculos, num_acidentes;
    int maior_indice_acidentes = -1, menor_indice_acidentes = -1;
    int codigo_cidade_maior, codigo_cidade_menor;
    int total_veiculos = 0, total_acidentes_RS = 0, cidades_RS = 0;

    for (int i = 1; i <= 200; i++) {
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo_cidade);

        if (codigo_cidade == 0) {
        }

        printf("Digite o estado da cidade (sigla): ");
        scanf("%s", estado);

        printf("Digite o número de veículos de passeio em 1992: ");
        scanf("%d", &num_veiculos);

        printf("Digite o número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%d", &num_acidentes);

        if (maior_indice_acidentes == -1 || num_acidentes > maior_indice_acidentes) {
            maior_indice_acidentes = num_acidentes;
            codigo_cidade_maior = codigo_cidade;
        }

        if (menor_indice_acidentes == -1 || num_acidentes < menor_indice_acidentes) {
            menor_indice_acidentes = num_acidentes;
            codigo_cidade_menor = codigo_cidade;
        }

        total_veiculos += num_veiculos;

        if (strcmp(estado, "RS") == 0) {
            total_acidentes_RS += num_acidentes;
            cidades_RS++;
        }
    }

    printf("a) Maior índice de acidentes de trânsito: %d (Cidade %d)\n", maior_indice_acidentes, codigo_cidade_maior);
    printf("   Menor índice de acidentes de trânsito: %d (Cidade %d)\n", menor_indice_acidentes, codigo_cidade_menor);

    if (cidades_RS > 0) {
        printf("b) Média de veículos nas cidades brasileiras: %.2lf\n", (double)total_veiculos / 200);
        printf("c) Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2lf\n", (double)total_acidentes_RS / cidades_RS);
    } else {
        printf("Nenhuma cidade do Rio Grande do Sul foi registrada.\n");
    }

    return 0;
}
