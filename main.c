#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // para usar acentuação
int main()
{
    setlocale(LC_ALL, "Portuguese"); // para usar acentuação
    int n1;
    int n2;
    int result;

    printf("Digite um numero:");
    scanf("%d", &n1);
    printf("Digite um numero:");
    scanf("%d", &n2);

    if ( n1 > n2){
        result = n1 - n2;
    }else {

        result = n2 - n1;
    }

    printf("A diferença é: %d", result);

    return 0;
}
