#include <stdio.h>

int main() {
    double A, B, C;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    if (A + B > C && A + C > B && B + C > A) {
        if (A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A) {
            printf("É um Triângulo Retângulo.\n");
        } else if (A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A) {
            printf("É um Triângulo Obtusângulo.\n");
        } else {
            printf("É um Triângulo Acutângulo.\n");
        }
    } else {
        printf("Não é um triângulo válido.\n");
    }

    return 0;
}
