1.questão:
#include <stdio.h>
#include <stdlib.h>


int main(){

    int n1 = 0;
    printf("Informe um numero: ");
    scanf("%d", &n1);
    printf(" %d \n %d %d \n %d %d %d \n %d %d %d %d \n %d %d %d %d %d \n %d %d %d %d %d %d %d \n ", n1, n1 + 1, n1 + 2, n1 + 3, n1 + 4, n1 + 5, n1 +6, n1 + 7, n1 + 8, n1 + 9 , n1 + 10, n1 + 11, n1 + 12, n1 + 13, n1 + 14, n1 + 15, n1 + 16, n1 + 16, n1 + 17, n1 + 18, n1 + 19, n1 + 20, n1 + 21);

}

2.questão:
#include <stdio.h>


int main(){
    for (int n = 0; n <= 10; n++){
        printf("Numero \t Quadrado \t Cubo \n %d \t %d \t  \t %d \n", n, n * n, n * n * n);
    }
}
3.questão:
#include <stdio.h>
#include <stdio.h>


int main(){

    int km = 0;

    printf("Informe sua velocidade atual: ");
    scanf("%d", &km);
    if(km >= 75){
        printf("%d KM Acima da velocidade: MULTA E MENOS 5 PONTOS NA CARTEIRA \n", km);
    } else if (km < 75 && km >= 65){
        printf("%d KM Voce ta um pouco veloz diminua a velocidade \n", km);
    } else if (km < 65 && km >= 55){
        printf("%d KM Velocidade Normal continue assim \n", km);
    } else if (km < 55 && km >= 45){
        printf("%d KM Velocidade um pouco baixa aumente porfavor \n", km);
    } else{
        printf("%d KM Trafego mais rapido \n", km);
    }
}
