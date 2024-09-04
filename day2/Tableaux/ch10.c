//Challenge 10 : Rechercher un Élément
//Écrivez un programme C qui recherche un élément spécifique dans un tableau d'entiers en utilisant une recherche linéaire.
//Le programme doit demander à l'utilisateur le nombre d'éléments, les éléments du tableau, et l'élément à rechercher, puis afficher si l'élément est présent ou non.

#include <stdio.h>

int main(){
int n, m, i;
printf("entrer les nembres le elements :");
scanf("%d", &n);
int T[n];
for(i=0;  i < n; i++){
    printf("Entrer l'element %d :", i+1);
    scanf("%d",&T[i]);
}
printf("entrer l'element de recherche: ");
scanf("%d", &m);
int exist=0;
for(i=0; i<n; i++){
    if(m == T[i]);
       exist=1;
}
 if(exist)
  printf("L'element %d est dans le tableau.\n", m);
else
  printf("L'element %d n'exist pas dans le tableau.\n", m);
}
