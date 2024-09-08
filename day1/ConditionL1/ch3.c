//Challenge 3 : Somme de Deux Valeurs
//Écrivez un programme C pour calculer la somme de deux valeurs entières données.
//Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.


#include<stdio.h>

int main() {
 int a, b, Somme, Tripple;
 printf("entrer la valeur de a et b : ");
 scanf("%d%d", &a, &b);
 Somme= a + b;
 if (a != b ){
    printf("la somme de %d et %d est : %d", a, b, Somme);
 }else{
  Tripple = 3 * Somme ;
  printf ("le tripple de la somme est : %d", Tripple);
 }
}
