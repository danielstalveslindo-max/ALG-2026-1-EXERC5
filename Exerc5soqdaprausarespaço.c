#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i;

    printf("Digite uma palavra ou frase: ");
    fgets(palavra, sizeof(palavra), stdin);

    int tam = strlen(palavra);
    if (tam > 0 && palavra[tam - 1] == '\n') {
        palavra[tam - 1] = '\0';
        tam--;
    }

    printf("Invertido: ");
    for (i = tam - 1; i >= 0; i--) {
        putchar(palavra[i]);
    }
    putchar('\n');

	system("pause");
    return 0;
}
