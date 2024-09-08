//Challenge 2 : Longueur de la Chaîne
//Écrivez un programme C qui calcule et affiche la longueur d'une chaîne de caractères sans utiliser la fonction strlen().

#include<stdio.h>
#include<string.h>

int main () {
char str[100];
int counter = 0;
int value , i;
printf("entrer une chaine de charachter: ");
scanf("%[^\n]s", str);
for (i=0; str[i] != '\0'; i++){
   counter++;
}
printf("%d", counter);

}
