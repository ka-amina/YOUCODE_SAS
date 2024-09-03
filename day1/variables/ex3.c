#include <stdio.h>
int main(){
float Yards, Km;
printf("entrer la valeur en km:");
scanf("%f", &Km);
Yards = Km * 1093.61;
printf("la distance de %.2f est: %.2f", Km, Yards);
}
