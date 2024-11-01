#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int min;
    int max;
    int numeroInserito = 0;
    int numeroTentativi = 1;
    int sceltaDifficoltà = 0;

    printf("Guess The Number\n");
    printf("|1|Facile\n|2|Medio\n|3|Difficile\n");
    scanf("%d", &sceltaDifficoltà);

    switch (sceltaDifficoltà)
    {
        case 1:
            min = 1;
            max = 10;
            break;
        case 2:
            min = 1;
            max = 30;
            break;
        case 3:
            min = 1;
            max = 60;
            break;
        default:
            min = 1;
            max = 30;
            break;
    }

    srand(time(NULL));
    int n = rand() % (max - min + 1) + min; // Numero casuale da 10 a 60

    while (n != numeroInserito && numeroTentativi <= 3)
    {
        printf("Indovina il numero compreso tra %d a %d\n", min, max);
        printf("Tentativo N.%d\n", numeroTentativi);
        scanf("%d", &numeroInserito);

        if (numeroInserito < min || numeroInserito > max)
        {
            printf("Numero troppo grosso/piccolo\n");
            numeroTentativi++;
        }
        else if (n > numeroInserito)
        {
            printf("Sbagliato riprova, il numero è più grande\n");
            numeroTentativi++;
        }
        else if (n < numeroInserito)
        {
            printf("Sbagliato riprova, il numero è più piccolo\n");
            numeroTentativi++;
        }
        else
        {
            printf("Hai indovinato il numero nel %d tentativo\n", numeroTentativi);
        }
    }
    printf("Hai terminato i tentativi, il numero era %d\n", n);

    return 0;
}
