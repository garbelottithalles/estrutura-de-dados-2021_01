//  Revisão de structs/registro: Esse programa armazena em um vetor a estrutura produtos, cada elemento do vetor possuirá id, nome, quantidade e valor.
#include <stdio.h>

typedef struct
{
    int id;
    char name[30];
    int quantify;
    float value;
} product;

int main()
{
    product products[4];
    int i, j;

    for(i = 0; i < 4; i++)
    {
        products[i].id = i;

        printf("Digite o nome do produto: ");
        scanf("%s", products[i].name);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &products[i].quantify);

        printf("Digite o valor unitario do produto: ");
        scanf("%f", &products[i].value);

        printf("\n");
    }

    for(j = 0; j < i; j++)
    {
        printf("\n--------------- Produto %d ---------------", j);
        printf("\nName: %s", products[j].name);
        printf("\nQuantify: %d", products[j].quantify);
        printf("\nValue: %.2f", products[j].value);
        printf("\nValor total em estoque: R$%.2f", products[j].quantify * products[j].value);
        printf("\n");
    }

}
