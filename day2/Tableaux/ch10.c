//Challenge 10 : Rechercher un �l�ment
//�crivez un programme C qui recherche un �l�ment sp�cifique dans un tableau d'entiers en utilisant une recherche lin�aire.
//Le programme doit demander � l'utilisateur le nombre d'�l�ments, les �l�ments du tableau, et l'�l�ment � rechercher, puis afficher si l'�l�ment est pr�sent ou non.

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
