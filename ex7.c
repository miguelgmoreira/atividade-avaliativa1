#include <stdio.h>

int main() {
    int num_alunos = 30;
    double notas[num_alunos];
    double media_geral = 0;

    for (int i = 0; i < num_alunos; i++) {
        double n1, n2, n3;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        double media_ponderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        notas[i] = media_ponderada;
        media_geral += media_ponderada;

        if (media_ponderada >= 7) {
            printf("Aluno %d: Média Ponderada = %.2lf - Aprovado\n", i + 1, media_ponderada);
        } else {
            printf("Aluno %d: Média Ponderada = %.2lf - Reprovado\n", i + 1, media_ponderada);
        }
    }

    media_geral /= num_alunos;
    printf("\nMédia Geral da Turma: %.2lf\n", media_geral);

    return 0;
}
