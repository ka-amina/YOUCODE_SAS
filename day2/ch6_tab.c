#include <stdio.h>

int main() {
int i,n, facteur;
printf(" Entrez le nombre d'éléments dans le tableau: ");
 scanf("%d", &n);
 int tab[n];
 printf(" Entrez le facteur: ");
 scanf("%d", &facteur);
 for(i=0; i<n; i++){
        printf("Element %d:", i+1);
        scanf("%d", &tab[i]);
        tab[i] *= facteur;
 }
 for(i=0; i<n; i++){
    printf("tab[%d] = %d\n", i+1, tab[i]);
 }
}
