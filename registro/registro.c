#include <stdio.h>
#include "registro.h"
#include <string.h>

void registrar_user(tp_user *u){
    printf("Digite um nome de usuario: ");
    scanf("%s", u->nome);

    printf("Digite o email: ");
    scanf("%s", u->email);

    char confirmar[20];
    while(1){
        printf("Digite sua senha: ");
        scanf("%s", u->senha);
        printf("Confirmar senha: ");
        scanf(" %s", confirmar);

        if(strcmp(u->senha, confirmar) == 0){
            break;
        }else{printf("As senhas devem ser iguais.\n");}
    }
}
