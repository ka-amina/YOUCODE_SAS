//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
//�crire le programme pour avoir un pyramide d'�toile, le nombre des lignes � composer est demand� � l�utilisateur.
//(chaque ligne doit avoir un nombre premier d'�toiles.

#include <stdio.h>
#define MAX_ETOILE 100

int main(void) {
  unsigned int nbLignes;
  unsigned int centreLigne;
  int i;
  char ligne[MAX_ETOILE];

  printf("Entrez le nombre de lignes d'etoiles que vous voulez dans la pyramide : ");
  scanf("%d", &nbLignes);

  for(i=0; i<MAX_ETOILE; i++) {
    ligne[i] = ' ';
  }
  ligne[MAX_ETOILE - 1] = '\0';

  centreLigne = nbLignes -1;
  for (i=0; i<nbLignes; i++) {
    ligne[centreLigne - i] = '*';
    ligne[centreLigne + i] = '*';

    printf("%s\n", ligne);
  }
}
