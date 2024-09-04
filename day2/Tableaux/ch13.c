//Challenge 13 : Afficher les Éléments Impairs
//Écrivez un programme C qui affiche uniquement les éléments impairs d'un tableau d'entiers.
//Le programme doit demander le nombre d'éléments et les éléments du tableau.

#include<stdio.h>

int main(){
int i, n;
printf("entrer le nombre d'éléments:");
scanf("%d", &n);
int T[n];
for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T[i]);
	}
for (i=0; i<n; i++){
    if(T[i] % 2 != 0)
        printf("%d\n", T[i]);
}
}
