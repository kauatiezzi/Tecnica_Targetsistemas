// 5- 

#include <stdio.h>
#include <string.h>

void invString(char string[]) {
    int i, j;
    char temp;
    int tamanho = strlen(string);

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

void main() {
    char string[100];

    printf("Informe uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    invString(string);

    printf("String invertida: %s\n", string);

}
