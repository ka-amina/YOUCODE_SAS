//Challenge 4 : Equation du Deuxième Degré
//Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.
#include <stdio.h>
#include <math.h>

int main() {
float a, b, c, x , delta, x1, x2, real, imag;
int i;
printf("entrer a et b et c: ");
scanf("%f%f%f", &a, &b, &c);
delta = pow(b,2) - 4* a*c;
if (delta<0){
    real = -b / (2 * a);
    imag = sqrt(-delta) / (2 * a);
    printf("L'équation a deux solutions imaginaires :\n");
    printf("x1 = %.2f + %.2fi\n", real, imag);
    printf("x2 = %.2f - %.2fi\n", real, imag);
}else if (delta>0){
    x1=(-b-sqrt(delta)) / (2 * a);
    x2=(-b+sqrt(delta)) / (2 * a);
    printf("l'equation a deux solutions reelles sont :\n x1= %.2f\n x2= %.2f", x1, x2);
}else {
   x=(-b)/(2*a);
   printf("l'equation a une solution est  :\n x= %.2f\n", x);
}

}
