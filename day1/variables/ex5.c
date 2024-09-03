//Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :/\?////
//
//C < 0 : Solide
//0 <= C < 100 : Liquide
//C >= 100 : Gaz
#include <stdio.h>
 int main(){
 float C;
 printf("entrer la température :");
 scanf("%f", &C);
 if(C < 0){
  printf("l'état de l'eau est Solide.");
 }
  else if(0 <= C < 100){
    printf("l'état de l'eau est Liquide.");
 }
 else{
    printf("l'etat de l'eau est Gaz.");
 }
 }
