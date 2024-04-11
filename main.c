// arquivo: main.c
#include <stdio.h>
#include <stdlib.h>
#include "leitura_csv.h"
#include "gerenciamento_clientes.h"
#include "presenca.h"
#include "relatorios.h"

int main() {
    // Ler dados dos clientes do arquivo CSV
    Cliente* clientes = lerClientesDoCSV("dados_clientes.csv");
    int numClientes = 0; // Inicializar o número de clientes

    // Menu de opções
    int opcao;
    do {
        printf("\n=== Menu ===\n");
        printf("1. Adicionar cliente\n");
        printf("2. Remover cliente\n");
        printf("3. Editar cliente\n");
        printf("4. Pesquisar cliente\n");
        printf("5. Registrar presença\n");
        printf("6. Calcular pagamento mensal\n");
        printf("7. Gerar relatórios\n");
        printf("8. Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarCliente(clientes, &numClientes);
                break;
            case 2:
                // Implementar remoção de cliente
                break;
            case 3:
                // Implementar edição de cliente
                break;
            case 4:
                // Implementar pesquisa de cliente
                break;
            case 5:
                registrarPresenca(clientes, numClientes);
                break;
            case 6:
                // Implementar cálculo de pagamento mensal
                break;
            case 7:
                // Implementar geração de relatórios
                break;
            case 8:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 8);

    // Liberar a memória alocada para os clientes
    liberarMemoriaClientes(clientes);

    return 0;
}