#include <stdio.h>

main ()
{
    char nome[20];
    float peso, altura, imc;

    printf("Calculo do IMC\n");
    printf("====================================\n");
    printf("Digite o seu nome = ");
    gets(nome);
    
    printf("Digite o seu peso(Kg) = ");
    scanf("%f", &peso);

    printf("Digite sua altura(m) = ");
    scanf("%f", &altura);

    printf("Calculando o IMC...\n");
    imc = peso / pow(altura,2);

    printf("%s, seu peso e %5.2f e sua altura e %5.2f\n",
            nome, peso, altura); 
}