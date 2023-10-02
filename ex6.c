#include <stdio.h>

int main() {
    double x, y;

    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Primeiro Quadrante\n");
    } else if (x < 0 && y > 0) {
        printf("Segundo Quadrante\n");
    } else if (x < 0 && y < 0) {
        printf("Terceiro Quadrante\n");
    } else if (x > 0 && y < 0) {
        printf("Quarto Quadrante\n");
    }

    return 0;
}
