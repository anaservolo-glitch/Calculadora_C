#include<stdio.h>
int main(){
    int calculadora;
    printf("\n*****MENU*****\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");
    printf("Escolha uma operacao: \n");
    scanf("%d", &calculadora);
    switch(calculadora){
        case 1:
    int soma, num1, num2;
    printf("SOMA\n");
    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("Digite um numero: \n");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("O resultado da soma eh:\n%d", soma);
    break;
        case 2:
        int sub, nume1, nume2;
        printf("SUBTRACAO\n");
        printf("Digite um numero: \n");
        scanf("%d", &nume1);
        printf("Digite um numero: \n");
        scanf("%d", &nume2);
        sub = nume1 - nume2;
        printf("O resultado da subtracao eh:\n%d", sub);
        break;
        case 3:
        int mult, n1, n2;
        printf("MULTIPLICACAO\n");
        printf("Digite um numero: \n");
        scanf("%d", &n1);
        printf("Digite um numero: \n");
        scanf("%d", &n2);
        mult = n1 * n2;
        printf("O resultado da multiplicacao eh:\n%d", mult);
        break;
        case 4:
        float div, nu1, nu2;
        printf("DIVISAO\n");
        printf("Digite um numero: \n");
        scanf("%f", &nu1);
        printf("Digite um numero: \n");
        scanf("%f", &nu2);
        div = nu1 / nu2;
        printf("O resultado da divisao eh:\n%.2f", div);
        break;
    }
    return 0;
}

