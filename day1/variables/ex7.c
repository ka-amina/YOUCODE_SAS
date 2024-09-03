//Challenge 7 : Moyenne pondérée de trois nombres
//Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

//1er nombre : pondération 2
//2ème nombre : pondération 3
//3ème nombre : pondération 5
#include<stdio.h>
int main(){
float a, b, c, Moyenne ;
printf("entrer la valeur de a:");
scanf("%f", &a);
printf("entrer la valeur de b:");
scanf("%f", &b);
printf("entrer la valeur de c:");
scanf("%f", &c);
a=a*2;
b=b*3;
c=c*5;
Moyenne=(a+b+c)/10;
printf("La moyenne est: %.2f", Moyenne);
}
