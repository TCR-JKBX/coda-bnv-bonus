
#include <stdio.h>

int main()
{
    int nombre;

    printf("Choisissez un nombre entre 0 et 100 : ");
    scanf("%d", &nombre);

    if (nombre < 0 || nombre > 100)
    {
        printf("Nombre invalide\n");
    }
    else
    {
        for (int i = 0; i <= nombre; i += 5)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

