//Challenge 9 : Inversion d'un Tableau
//Écrivez un programme C qui inverse les éléments d'un tableau d'entiers.
//Par exemple, si le tableau est [1, 2, 3, 4, 5], il doit devenir [5, 4, 3, 2, 1]. Affichez le tableau inversé.
#include <stdio.h>

int main(){
int n, i, j;
printf("entrer les nembres le elements :");
scanf("%d", &n);
int T[n],Ti[n];
for (i=0; i<n; i++){
    printf("entrer l'element %d" , i+1);
    scanf("%d", &T[i]);
}
for (j=0; j<n; j++){
    Ti[j]= T[n-j-1];
}
printf("les elements inverse de tableau sont:\n");
for(j=0; j<n; j++){
    printf("T[%d] = %d", j, Ti[j]);
}
}
