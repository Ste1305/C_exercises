#include <stdio.h>

int main(){

    int numero, i;

    // usando do while para entrada usuario, verificar se positivo ou negativo e calcular tabuada
    do {
        printf("Digite um numero para calcular a tabuada: "); scanf("%d", &numero);
        if(numero > 0){
        printf("Voce digitou %d\n", numero);
        for(i = 0; i <= 10; i++){
            printf("%d * %d = %d\n", numero, i, numero * i); 
        } break;
        }else{
        printf("%d é um valor negativo!\nTente de novo\n", numero);
        }
    } while(numero < 0);
}    