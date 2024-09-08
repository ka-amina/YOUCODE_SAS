//Challenge 1 : Affichage d'une Chaîne
//Écrivez un programme C qui lit une chaîne de caractères entrée par l'utilisateur et l'affiche à l'écran.

#include <stdio.h>
#include <string.h>

int main() {
char str[100];
printf("entrer un message: ");
scanf("%[^\n]s", &str);
printf("this is your message : %s", str);
}
