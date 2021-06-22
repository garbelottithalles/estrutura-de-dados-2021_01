#include <stdio.h>

char notaFinal(float n1, float n2, float n3);

int main()
{
    printf("Conceito = %c\n", notaFinal(10, 10, 10));
}

char notaFinal(float n1, float n2, float n3)
{
    float total = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    if (total >= 9.5)
        return 'S';
    if (total >= 8.5)
        return 'A';
    else if (total >=7)
        return 'B';
    else if (total >= 6)
        return 'C';
    else
        return 'D';
}