#include <stdio.h>

int main() {
    int chico_altura = 150;  
    int ze_altura = 110;    
    int anos = 0;            

    while (ze_altura <= chico_altura) {
        anos++;              
        chico_altura += 2;   
        ze_altura += 3;      
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;  
}
