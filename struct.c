typedef struct{
    char dia[4],mes[4],ano[8];
}Data;

typedef struct {
    char codInternacional[4];
    char codArea[4];
    char numero[15];
}Telefone;

typedef struct {
    char rua[200];
    int numero;
    char complemento[100];
    char bairro[100];
    char cep[100];
    char cidade[100];
    char estado[100];
    char pais[100];
}Endereco;

typedef struct {
    char nome[100];
    char email[100];
    Endereco endereco;
    Telefone telefone;
    Data nascimento;
    char obs[500];
    int id;
}pessoa;
