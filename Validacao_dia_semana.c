#include<stdio.h>

/* O programa solicita ao usuário que informe um valor inteiro qualquer (entre
1 e 7). O programa deverá informar o dia da semana correspondente, sendo 1 -
Domingo, 2 - Segunda-feira, 3 - Terça-feira, …, 7 - Sábado. Caso o usuário informe
um valor inválido, aparecera na tela a mensagem “Dia Invalido”.*/

int main(){
    int num;

    printf("Insira um numero entre 1 e 7: \n");
    scanf("%d", &num);

    switch (num){
        case 1:
        printf("Domingo\n");
        break;
        case 2:
        printf("Segunda\n");
        break;
        case 3:
        printf("Terca\n");
        break;
        case 4:
        printf("Quarta\n");
        break;
        case 5:
        printf("Quinta\n");
        break;
        case 6:
        printf("Sexta\n");
        break;
        case 7:
        printf("Sabado\n");
        break;
        default:
        printf("Dia invalido!\n");
        
    }



    return 0;
} 