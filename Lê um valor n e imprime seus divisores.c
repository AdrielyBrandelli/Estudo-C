#include <stdio.h>
#include <locale.h>

//Programa que lê um número "n" e imprime os valores entre 2 e "n" que são divisores de "n"

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, i = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("\nOs divisores de %d são: ");

    for(i=2; i<=num; i++){
        if(num%i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}
