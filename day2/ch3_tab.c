//Challenge 3 : Somme des �l�ments
//�crivez un programme C qui calcule et affiche la somme des �l�ments d'un tableau d'entiers.
//Le programme doit demander le nombre d'�l�ments, puis les �l�ments du tableau, et afficher la somme totale.

#include <stdio.h>

int main() {
   int i, n, somme;
   int tab[30];

   printf(" Entrez le nombre d'�l�ments dans le tableau: ");
   scanf("%d", &n);

   printf(" Entrez les �l�ments du tableau: ");
   for (i = 0; i < n; i++)
      scanf("%d", &tab[i]);

   somme = 0;
   for (i = 0; i < n; i++)
      somme = somme + tab[i];

   printf(" La somme = %d", somme);
}

