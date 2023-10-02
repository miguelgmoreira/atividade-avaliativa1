#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    double numerador = 5 * x + 3;
    double denominador = sqrt(x * x - 16);

    double fx = numerador / denominador;

    printf("O valor de f(%.2lf) é: %.2lf\n", x, fx);

    return 0; 
}
