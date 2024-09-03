//Challenge 2 : Saisie et Affichage des Éléments
//Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau, puis demande à l'utilisateur de saisir ces éléments. Affichez ensuite les éléments du tableau.
#include <stdio.h>
#include <conio.h>
int main(){
int i, tab[100], n;
printf("entrer le nombre d'éléments de tableau:");
scanf("%d", &n);
for(i=0; i<n; i++){
    printf("tab[%d]", i);
    scanf("%d", &tab[i]);
}
for(i=0; i<n; i++)
printf("%d", tab[i]);
getch();
}

