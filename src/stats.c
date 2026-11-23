
#include <stdio.h>
#include "stats.h"

double calculer_moyenne(const double *notes, int n)
{
    double somme = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        somme = somme + notes[i];
    }

    return somme / n;
}

const char* determiner_mention(double moyenne)
{
    if (moyenne >= 16)
        return "Tres Bien";

    else if (moyenne >= 14)
        return "Bien";

    else if (moyenne >= 12)
        return "Assez Bien";

    else if (moyenne >= 10)
        return "Passable";

    else
        return "Ajourné";
}
