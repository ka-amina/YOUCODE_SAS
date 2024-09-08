//Challenge 2 : Voyelle ou Non
//Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.
// les voyelle : a e i o u y

#include <stdio.h>

int main(){
char Charachter;
printf("entrer un charachtere : ");
scanf ("%c", &Charachter);
switch (Charachter) {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'y':
       printf("%c est un voyelle", Charachter);
       break;
   default:
    printf("%c n'est pas un voyelle", Charachter);
}
}
