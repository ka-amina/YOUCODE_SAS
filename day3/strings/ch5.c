//Challenge 5 : Inversion de Chaîne
//Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée.
//Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".

#include<stdio.h>
#include<string.h>

int main() {
char str[50], inverse[50];
int t, i, j=0;
printf("entrer votre chaine de charachter : ");
gets(str);
t = strlen(str);
inverse[t] = '\0';
for(i=t-1; i>=0; i--){
    inverse[j++] = str[i];
}
inverse[i]= '\0';
printf("chaine de charactere inverser est = %s", inverse);
}
