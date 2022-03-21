#include <stdio.h>
#include <stdlib.h>

int main () {
    int x;
    int y;
    int z;
    float resultado;
    printf("digite um numero inteiro\n");
    scanf("%d", &x);
    printf("escolha o operador digitando o respectivo numero\n1(soma) 2(subtracao) 3(multiplicacao) 4(divisao) 5(modulo)\n");
    scanf("%d", &z);
    printf("digite o segundo numero\n");
    scanf("%d", &y);
    ///*
    if (z == 1) {
        resultado = x + y;
        printf("%f", resultado);
    } else if (z == 2) {
        resultado = x - y;
        printf("%f", resultado);
    } else if (z == 3) {
        resultado = x * y;
        printf("%f", resultado);
    } else if (z == 4) {
        if (x == 0, y == 0) {
            printf("nao e possivel dividir por 0");
        } else {
            resultado = x / y;
            printf("%f", resultado);
        }
    } else if (z == 5) {
        resultado = x % y;
        printf("%f", resultado);
    } else {
        printf("este nao e um operador valido");
    }
    //*/
}
//C:\Users\ihrie.DESKTOP-6H9V37N\Desktop\projetinhos