//Challenge 13 : Afficher les �l�ments Impairs
//�crivez un programme C qui affiche uniquement les �l�ments impairs d'un tableau d'entiers.
//Le programme doit demander le nombre d'�l�ments et les �l�ments du tableau.

#include<stdio.h>

int main(){
int i, n;
printf("entrer le nombre d'�l�ments:");
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
