#include <stdio.h>

int main() {
    double salario, maior_salario = 0, soma_salario = 0;
    int num_filhos, total_pessoas = 0, pessoas_ate_100 = 0;
    
    soma_salario = 0;
    total_pessoas = 0;
    
    do {
        printf("Digite o salário da pessoa (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);
        
        if (salario < 0) {
            break;
        }
        
        printf("Digite o número de filhos da pessoa: ");
        scanf("%d", &num_filhos);
        
        soma_salario += salario;
        
        if (salario <= 100.0) {
            pessoas_ate_100++;
        }
        
        if (salario > maior_salario) {
            maior_salario = salario;
        }
        
        total_pessoas++;
    } while (1);  
    
    if (total_pessoas > 0) {
        double media_salario = soma_salario / total_pessoas;
        double media_filhos = (double)total_pessoas / total_pessoas;
        
        double percentual_ate_100 = (double)pessoas_ate_100 / total_pessoas * 100.0;
        
        printf("a) Média do salário da população: %.2lf\n", media_salario);
        printf("b) Média do número de filhos: %.2lf\n", media_filhos);
        printf("c) Maior salário: %.2lf\n", maior_salario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentual_ate_100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
