/*
 Barra e asterisco inicia comentário de  mais de uma linha
 ============================================================================
 Nome        : Exemplo59.c
 Autor      : Prof Clayton J A Silva
 Copyright   : Curso de C Ibmec
 Descrição : Estruturas heterogêneas union
 ============================================================================
 Asterisco e barra fecha comentário aberto
 */

#include <stdio.h>

// Definição da union Identificacao
union Identificacao {
    char cpf[12];   // CPF com 11 dígitos + caractere nulo
    char cnpj[15];  // CNPJ com 14 dígitos + caractere nulo
};

// Função para exibir a identificação escolhida pelo usuário
void exibirIdentificacao(union Identificacao id, char tipo) {
    if (tipo == 'C') {
        printf("CPF informado: %s\n", id.cpf);
    } else if (tipo == 'J') {
        printf("CNPJ informado: %s\n", id.cnpj);
    } else {
        printf("Tipo de identificação inválido!\n");
    }
}

int main() {
    union Identificacao id;
    char tipo;

    // Solicita o tipo de identificação
    printf("Digite o tipo de identificação (C para CPF, J para CNPJ): ");
    scanf(" %c", &tipo);

    // Solicita o número de acordo com o tipo escolhido
    if (tipo == 'C') {
        printf("Digite o CPF (apenas números): ");
        scanf("%11s", id.cpf);  // Limita a entrada para 11 caracteres
    } else if (tipo == 'J') {
        printf("Digite o CNPJ (apenas números): ");
        scanf("%14s", id.cnpj);  // Limita a entrada para 14 caracteres
    } else {
        printf("Tipo de identificação inválido!\n");
        return 1;
    }

    // Exibe a identificação
    exibirIdentificacao(id, tipo);

    return 0;
}
