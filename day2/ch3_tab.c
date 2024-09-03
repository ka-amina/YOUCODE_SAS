//Challenge 3 : Somme des Éléments
//Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers.
//Le programme doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.

#include <stdio.h>

int main() {
   int i, n, somme;
   int tab[30];

   printf(" Entrez le nombre d'éléments dans le tableau: ");
   scanf("%d", &n);

   printf(" Entrez les éléments du tableau: ");
   for (i = 0; i < n; i++)
      scanf("%d", &tab[i]);

   somme = 0;
   for (i = 0; i < n; i++)
      somme = somme + tab[i];

   printf(" La somme = %d", somme);
}

