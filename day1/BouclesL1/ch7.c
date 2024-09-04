//Challenge 7 : Inversion d'un Entier
//Écrivez un programme C qui lit un entier à plusieurs chiffres et l'affiche en ordre inverse sans utiliser de tableaux.
//Par exemple, si l'entrée est 12345, affichez 54321.
#include<stdio.h>

int main(){
int n, inverse;
printf("entrer un nombre:");
scanf("%d", &n);
do{
    inverse= (inverse * 10) + (n%10);
    n= n / 10;
} while(n != 0) ;
printf("L'inverse est : %d", inverse);
}
