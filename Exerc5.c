#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i;  // corrigi essa desgrama

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    int tamanho = strlen(palavra);
    printf("Palavra invertida: ");

    for (i = tamanho - 1; i >= 0; i--) {
        putchar(palavra[i]);
    }
    putchar('\n');

	system("pause");
    return 0;
}
