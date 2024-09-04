//Challenge 4 : Affichage des N Premiers Nombres Impairs
//Écrivez un programme C qui demande un nombre entier n et affiche les n premiers nombres impairs.
//Par exemple, pour n = 5, affichez : 1, 3, 5, 7, 9.
#include <stdio.h>
int main(){
int n, i;
printf("entrer un nombre entier:");
scanf("%d", &n);
printf("\nLes nombres impairs se trouvant entre 1 et %d:\n", n);
 for(i=1; i<=n; i++){
  if(i % 2 != 0){
    printf("%d\n", i);
  }
 }
}
