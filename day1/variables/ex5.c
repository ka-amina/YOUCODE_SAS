//�crivez un programme qui demande la temp�rature en Celsius et affiche l'�tat de l'eau � cette temp�rature (solide, liquide, gaz). R�gle :/\?////
//
//C < 0 : Solide
//0 <= C < 100 : Liquide
//C >= 100 : Gaz
#include <stdio.h>
 int main(){
 float C;
 printf("entrer la temp�rature :");
 scanf("%f", &C);
 if(C < 0){
  printf("l'�tat de l'eau est Solide.");
 }
  else if(0 <= C < 100){
    printf("l'�tat de l'eau est Liquide.");
 }
 else{
    printf("l'etat de l'eau est Gaz.");
 }
 }
