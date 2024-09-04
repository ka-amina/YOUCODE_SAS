//Challenge 6 : Affichage des N Premiers Nombres Pair
//Écrivez un programme C qui demande un nombre entier n et affiche les n premiers nombres pairs.
//Par exemple, pour n = 4, affichez : 2, 4, 6, 8.

#include <stdio.h>
int main(){
int n, i;
printf("entrer un nombre entier:");
scanf("%d", &n);
printf("\nLes nombres pairs se trouvant entre 1 et %d:\n", n);
 for(i=1; i<=n; i++){
  if(i % 2 == 0){
    printf("%d\n", i);
  }
 }
}
