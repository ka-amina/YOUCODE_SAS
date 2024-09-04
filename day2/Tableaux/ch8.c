//Challenge 8 : Copie d'un Tableau
//Écrivez un programme C qui copie les éléments d'un tableau d'entiers dans un autre tableau.
//Affichez les éléments du tableau original et du tableau copié pour vérifier que la copie est correcte.

#include<stdio.h>

int main(){
int i, n;
printf("entrer le nombre d'éléments:");
scanf("%d", &n);
int T1[n];
int T2[n];
for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T1[i]);
   		T2[i]=T1[i];
}
for(i = 0; i < n; i++){
    printf("%d ", T1[i]);
}
printf("\n");
for(i = 0; i < n; i++){
    printf("%d ", T2[i]);
}

}
