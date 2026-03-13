#ifndef REGISTRO_H
#define REGISTRO_H

typedef struct{
    char email[50];
    char nome[30];
    char senha[20];
} tp_user;

void registrar_user(tp_user *u);

#endif