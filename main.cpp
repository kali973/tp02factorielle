#include <stdio.h>

int main()
{
    int nombre, ind;
    double factoriel = 1;

    printf("Saisir un entier pour le calcul factorielle \n");
    scanf("%d", &nombre);

    for (ind = 1; ind <= nombre; ind++)
        factoriel = factoriel * ind;
    printf("la factorielle de %d est %g", nombre, factoriel);
    return 0;
}
