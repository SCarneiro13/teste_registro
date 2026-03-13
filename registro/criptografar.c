#include <stdio.h>
#include <string.h>

void sCodificador1(char *texto[]);

void sCodificador2(char *texto[]);

void sCodificador3(char *texto[]);

void criptografar(char texto[]){ // Codificador primaria, os outros são complementares; Não precisa ser *cript[] pois vetor de char já é ponteiro.
                                // texto[] == *texto == &texto[0], ambos guargam o endereço do primeiro caractere da string e podem modificar o vetor original.
    int tam = strlen(texto);
    int inicio = 0, fim = tam-1; //Essas variaveis vão ser usadas para inverter a string.

    for(int i = 0; i < tam; i++){ //Somar 3 apenas nos caracteres.
        if(((texto[i] > 64) && (texto[i] < 91)) || ((texto[i] > 96) && (texto[i] < 123))){ //Verificando se é uma letra do alfabeto.
            texto[i] += 3;
        }
    }

    while(fim > inicio){ //Inverter a string.
        char temp;

        temp = texto[inicio];
        texto[inicio] = texto[fim];
        texto[fim] = temp;

        inicio++;
        fim--;
    }

    return;
}