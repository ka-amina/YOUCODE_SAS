#include <stdio.h>
int main(){
 float kilometres_par_heure, metres_par_seconde;
 printf("entrer la vitesse en kilom�tres par heure:");
 scanf("%f", &kilometres_par_heure);
 metres_par_seconde = kilometres_par_heure * 0.27778;
 printf("la vitesse de %.2f en  m�tres par seconde est : %.2f", kilometres_par_heure, metres_par_seconde);
}
