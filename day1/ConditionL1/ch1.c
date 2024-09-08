//Challenge 1 : Paire ou Impaire
//Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.

#include<stdio.h>

int main(){
int a;
printf("entrer un nombre : ");
scanf("%d", &a);
if (a % 2 == 0) {
  printf("le nombre est pair");
}else {
printf("le nombre est impair");
}
}

