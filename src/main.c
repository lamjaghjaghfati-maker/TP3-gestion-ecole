
#include <stdio.h>
#include "etudiant.h"

int main()
{
    Etudiant e1 = {
        1,
        "Fatima",
        {15, 16, 14, 17}
    };

    Etudiant e2 = {
        2,
        "Sara",
        {10, 12, 11, 13}
    };

    afficher_etudiant(&e1);

    afficher_etudiant(&e2);

    return 0;
}
