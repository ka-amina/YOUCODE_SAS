//Challenge 4 : Trouver le Maximum
//�crivez un programme C qui trouve et affiche le plus grand �l�ment dans un tableau d'entiers.
//Le programme doit demander le nombre d'�l�ments et les �l�ments du tableau.
#include <stdio.h>

int main() {
   int i, n, max;

   printf(" Entrez le nombre d'�l�ments dans le tableau: ");
   scanf("%d", &n);
   int tab[n];
    for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&tab[i]);
	}
   max = tab[0];
   for(i=0; i<n; i++){
     if(tab[i] > max)
        max = tab[i];
   }
   printf("\nLe max est : %d\n", max);
}

