//Challenge 3 : Affichage des Nombres Premiers
//�crivez un programme C qui lit un entier n et affiche tous les nombres premiers de 1 � n.
//Un nombre est consid�r� premier s'il est divisible uniquement par 1 et lui-m�me.
#include<stdio.h>

int main(){
int n, i, p=0;
printf("entrer un nembre:");
scanf("%d", &n);
for(i=1; i<=n; i++){
    if(n%i==0)
    {
        p++;
    }
}
if(p==2)
    printf("%d est un nombre premier.", n);
else
   printf("%d n'est pas un nombre premier.", n);
}
