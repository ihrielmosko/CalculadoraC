#include <stdio.h>
#include <stdlib.h>

int main () {
    int x, x2, y, z, i;
    float resultado;

    system("cls");

    printf("digite um numero inteiro\n");
    scanf("%d", &x);
    printf("escolha o operador digitando o respectivo numero\n0(soma) 1(subtracao) 2(multiplicacao) 3(divisao) 4(resto) 5(potencia)\n");
    scanf("%d", &z);
    printf("digite o segundo numero\n");
    scanf("%d", &y);
        
    ///*
    if (z == 0) {
        resultado = x + y;
        printf("%f", resultado);

    } else if (z == 1) {
        resultado = x - y;
        printf("%f", resultado);

    } else if (z == 2) {
        resultado = x * y;
        printf("%f", resultado);

    } else if (z == 3) {
        if (x == 0, y == 0) {
            printf("nao e possivel dividir por 0");

        } else {
            resultado = x / y;
            printf("%f", resultado);
        }

    } else if (z == 4) {
        resultado = x % y;
        printf("%f", resultado);

    } else if (z == 5) {
        x2 = x;

        while (y != 1) {
            if (y < 0){
                printf("expoente negativo indisponivel");
                break;
            } else if (y == 0) {
                printf("1");
                break;
            } else {
                x2 = x2 * x;
                y--;
                resultado = x2;
            }
            if (y = 1) {
                if (x < 0) {
                    resultado = resultado/-1;
                    printf("%f\n", resultado);
                } else {
                    printf("%f\n", resultado);
                }
            } else {}
        }
    } else {
        printf("este nao e um operador valido");
    }
    //*/
    return 0;
}