//Challenge 2 : Saisie et Affichage des �l�ments
//�crivez un programme C qui demande � l'utilisateur le nombre d'�l�ments d'un tableau, puis demande � l'utilisateur de saisir ces �l�ments. Affichez ensuite les �l�ments du tableau.
#include <stdio.h>
#include <conio.h>
int main(){
int i, tab[100], n;
printf("entrer le nombre d'�l�ments de tableau:");
scanf("%d", &n);
for(i=0; i<n; i++){
    printf("tab[%d]", i);
    scanf("%d", &tab[i]);
}
for(i=0; i<n; i++)
printf("%d", tab[i]);
getch();
}

