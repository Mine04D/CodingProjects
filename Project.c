#include <stdio.h>
#include <stdlib.h>

int num1;

int main()
{
    printf("Insira um valor: ");
    scanf("%i", &num1);
    printf("Resultado: %i", num1 + num1);
    
    system("pause");
    return 0;
}
