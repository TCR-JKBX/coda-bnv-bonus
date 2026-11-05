
#include <stdio.h>

int main()
{
    int nombre;
    unsigned long long resultat = 1;

    printf("Choisissez un nombre entre 2 et 20 : ");
    scanf("%d", &nombre);

    if (nombre < 2 || nombre > 20)
    {
        printf("Nombre invalide\n");
    }
    else
    {
        for (int i = 1; i <= nombre; i++)
        {
            resultat = resultat * i;
        }

        printf("La factorielle de %d est : %llu\n", nombre, resultat);
    }

    return 0;
}

