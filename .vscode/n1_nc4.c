#include <stdio.h>

int main(){

    int idade;
    float altura;
    int peso;
    char nome[20];
    // sintaxe scanf
    // scanf("formato1" "formato2, &variavel, &variavel2, ...);

    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("A sua idade é: %d\n", idade);

    printf(" Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A sua altura é: %f\n", altura);

    printf("Digite seu peso: ");
    scanf("%d", &peso);
    printf("O seu peso é: %d\n", peso);

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("O seu nome é: %s\n", nome);



    

    


    
}