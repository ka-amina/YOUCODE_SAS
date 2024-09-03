#include <stdio.h>

int main(){
char nom[100] ,  Prenom[100], sexe[100], Adress_email[100];
int Age;
printf("entrer votre nom:");
gets(nom);
printf("entrer votre Prenom:");
gets(Prenom);
printf("entrer votre sexe:");
gets(sexe);
printf("entrer votre Adress email:");
gets(Adress_email);
printf("entrer votre age:");
scanf("%d", &Age);
printf("les informations de condidat est:\n le nom est:%s\n le Prenom est:%s\n l'age est:%d\n le sexe est:%s\n le Adress email est:%s\n", nom, Prenom, Age, sexe, Adress_email);
}
