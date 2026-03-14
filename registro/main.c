#include <stdio.h>
#include "criptografar.h"
#include "registro.h"

int main(){
    tp_user usuario;

    registrar_user(&usuario);

    criptografar(usuario.senha);

    printf("\nUsuario registrado:\n");
    printf("Nome: %s\n", usuario.nome);
    printf("Email: %s\n", usuario.email);
    printf("Senha criptografada: %s\n", usuario.senha);
    printf("Ola, Mundo!");

    return 0;
}