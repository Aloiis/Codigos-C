#include <stdio.h>
#include <math.h>

main()
{
    float a,b,c,delta,x1,x2;
    
    printf("Caculo da Equacao Segundo Grau\n");
    printf("=========================================\n\n");
    
    printf("Digite o Coeficiente A = ");
    scanf("%f", &a);

    printf("Digite o Coeficiente B = ");
    scanf("%f", &b);

    printf("Digite o Coeficiente C = ");
    scanf("%f", &c);

    printf("Coeficientes Digitados = %5.2f %5.2f %5.2f\n", a,b,c);

    if(a == 0){
        printf("Nao e equacao de segundo grau!\n\n");
        printf("Finalizando programa...");
    } else {
        printf("Calculando Delta...\n\n");
        //delta = (b*b) - (4*a*c);
        delta = pow(b,2) - (4*a*c);

        printf("Delta equivale a = %5.2f", delta);
        if(delta < 0){
            printf("\nNao ha raizes!\n\n");
            printf("Finalizando programa...\n");

        }else{
            printf("\nCalculando as Raizes...\n\n");
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);

            printf("\nA primeira Raiz = %5.2f\n", x1);
            printf("\nA Segunda Raiz = %5.2f", x2);
            printf("\n\nFinalizando...");

        }
    }
}