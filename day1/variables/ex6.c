//Challenge 6 : Calcul et affichage des r�sultats
//Deux nombres r�els, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec pr�cision d�cimale.
#include <stdio.h>
int main(){
float a, b, p, m, t, d;
printf("entrer la valeur de a:");
scanf("%f", &a);
printf("entrer la valeur de b:");
scanf("%f", &b);
p=a+b;
m=a-b;
t=a*b;
if (b==0){
    printf("b est null on ne peut pas faire la devidion.");
}else{
    d=a/b;
    printf("la devision est:%.2f\n", d);
    }
printf("l'operation de %.2f et %.2f est:\n la somme est: %.2f\n la soustraction est :%.2f\n la multiplication est :%.2f\n ", a, b, p, m, t);

}
//la devision est:%.2f\n
