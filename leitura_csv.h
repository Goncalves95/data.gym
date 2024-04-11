// arquivo: leitura_csv.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char genero;
    char plano[50];
} Cliente;

Cliente* lerClientesDoCSV(const char* arquivo) {
    // código para ler os dados do arquivo CSV e armazená-los em memória como um array de estruturas Cliente
}

void liberarMemoriaClientes(Cliente* clientes) {
    // código para liberar a memória alocada para o array de clientes
}