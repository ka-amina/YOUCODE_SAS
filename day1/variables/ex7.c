//Challenge 7 : Moyenne pond�r�e de trois nombres
//�crivez un programme en C pour calculer la moyenne pond�r�e de trois nombres donn�s par l'utilisateur avec les pond�rations suivantes :

//1er nombre : pond�ration 2
//2�me nombre : pond�ration 3
//3�me nombre : pond�ration 5
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
