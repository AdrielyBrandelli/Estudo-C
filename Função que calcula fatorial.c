#include <stdio.h>
#include <locale.h>

long int fat(long int n){
    if(n == 0){
        printf("1\n");
    }
    if(n > 20){
        printf("O número deve ser menor ou igual a 20! Reinicie o programa e tente novamente.\n ");
    }
    else{
        printf("\n%Id! = ", n);
        for(int i=1;i<=n;i++){
            n = n*n;
            return n;
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Este programa calcula o fatorial de um número inteiro 'n' menor ou igual a 20 por função!\n");
    printf("Para encerar o programa, digite '-1'.\n\n");

    long int numFatorado;
    while(numFatorado != -1){
        printf("Digite um número (inteiro e menor ou igual a 20) a ser fatorado: ");
        scanf("%Id", &numFatorado);
  //      printf("\n");
        if(numFatorado == -1){
            printf("Você encerrou o programa!\n");
            break;
        }else{
            numFatorado = fat(numFatorado);
            printf("%Id ", numFatorado);
            printf("\n\n");
        }
    }
}
