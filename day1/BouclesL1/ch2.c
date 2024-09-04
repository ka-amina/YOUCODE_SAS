//Challenge 2 : Factorielle d'un Nombre
//Écrivez un programme C qui calcule la factorielle d'un nombre entier positif n entré par l’utilisateur.
//La factorielle de n est le produit de tous les entiers positifs inférieurs ou égaux à n.
//Par exemple, pour n = 5, affichez : 5! = 120.
#include<stdio.h>

int main(){
int n, factoriel=1, i;
printf("entrer un entier:");
scanf("%d", &n);
for(i=1; i<=n; ++i)
    factoriel= factoriel* i;
    printf("le factoriel de %d est : %d! = %d ", n, n, factoriel);
}
