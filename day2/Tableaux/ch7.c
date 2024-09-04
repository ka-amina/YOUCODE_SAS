//Challenge 7 : Tableau en Ordre Croissant
//Écrivez un programme C qui demande à l'utilisateur de saisir un tableau d'entiers,
//puis affiche le tableau trié en ordre croissant sans utiliser de fonction de tri prédéfinie.
#include<stdio.h>

int main(){
int n, i, j, ordre;
printf("entrer le nombre d'elements:");
scanf("%d", &n);
int T[n];
for(i=0; i<n; i++){
    printf("entrer les elements T[%d]", i+1);
    scanf("%d",&T[i]);
}
for (i=0; i<n; i++) {
    for (j=i+1; j<n; j++){
        if(T[i]>T[j]){
            ordre = T[i];
            T[i]=T[j];
            T[j]=ordre;
        }
    }
}
printf("les elements du tableau par ordre croissant: \n ");
for(i=0; i<n; i++)
    printf("%d  ", T[i]);
}
