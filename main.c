#include <stdio.h>
#include <stdlib.h>

struct data {
    int dia,mes,ano;
};

struct telefone {
    int codInt;
    int codArea;
    int numero;
};

struct endereco {
    char rua[200];
    int numero;
    char complemento[100];
    char bairro[100];
    int cep[100];
    char cidade[100];
};

struct pessoa {
    char nome[100];
    char email[100];
    struct endereco ende;
    struct telefone tele;
    struct data nascimento;
    char obs[500];
};

int main(){

    return 0;
}