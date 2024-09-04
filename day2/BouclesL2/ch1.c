//Challenge 1 : Table de Multiplication Inversée
//Écrivez un programme C qui demande un nombre à l’utilisateur et affiche sa table de multiplication en ordre décroissant, de 10 à 1. Par exemple, pour le nombre 5, affichez :
//
//5 * 10 = 50 5 * 9 = 45 5 * 8 = 40 ... 5 * 1 = 5
#include <stdio.h>

int main(){
int a, i;
printf("Enter a number:");
scanf("%d", &a);
for(i=10; i>=0; i--){
    printf("%d * %d = %d \n", a, i, a*i);
}
}
