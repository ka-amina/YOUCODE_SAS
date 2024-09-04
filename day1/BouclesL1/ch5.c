//Challenge 5 : Calcul de la Puissance
//Écrivez un programme C qui calcule la puissance d'un nombre entier base élevé à un exposant exposant.
//Utilisez une boucle pour effectuer le calcul. Par exemple, pour base = 3 et exposant = 4, le résultat est 3^4 = 81.

#include<stdio.h>

int main(){
int n, x, p=1,i;
printf("entrer un nembre :");
scanf("%d", &n);
printf("entrer la puissance :");
scanf("%d", &x);
for(i=1; i<=x; i+=1){
  p=p*n;
}
 if (n==0 && x==0){
    printf("erreur");
 }else{
 printf("%d a la puissance %d est: %d", n, x, p);
 }
}

