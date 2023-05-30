#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Função para gerar uma senha aleatória
char* gerar_senha(int min_caracteres, int max_caracteres, int incluir_maiusculas, int incluir_minusculas, int incluir_numeros, int incluir_especiais) {
    const char letras_maiusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char letras_minusculas[] = "abcdefghijklmnopqrstuvwxyz";
    const char numeros[] = "0123456789";
    const char especiais[] = "!@#$%^&*()";

    const int tamanho_max = 100;
    char* senha = malloc(tamanho_max * sizeof(char));
    memset(senha, 0, tamanho_max);

    int tamanho_senha = min_caracteres + rand() % (max_caracteres - min_caracteres + 1);

    int indice = 0;
    int escolha = 0;
    int tamanho = 0;

    if (incluir_maiusculas) {
        tamanho = strlen(letras_maiusculas);
        escolha = rand() % tamanho;
        senha[indice++] = letras_maiusculas[escolha];
    }
    if (incluir_minusculas) {
        tamanho = strlen(letras_minusculas);
        escolha = rand() % tamanho;
        senha[indice++] = letras_minusculas[escolha];
    }
    if (incluir_numeros) {
        tamanho = strlen(numeros);
        escolha = rand() % tamanho;
        senha[indice++] = numeros[escolha];
    }
    if (incluir_especiais) {
        tamanho = strlen(especiais);
        escolha = rand() % tamanho;
        senha[indice++] = especiais[escolha];
    }

    const char* caracteres = "";

    if (incluir_maiusculas)
        caracteres = letras_maiusculas;
    if (incluir_minusculas)
        caracteres = letras_minusculas;
    if (incluir_numeros)
        caracteres = numeros;
    if (incluir_especiais)
        caracteres = especiais;

    tamanho = strlen(caracteres);

    for (; indice < tamanho_senha; indice++) {
        escolha = rand() % tamanho;
        senha[indice] = caracteres[escolha];
    }

    senha[indice] = '\0';

    return senha;
}

int main() {
    srand(time(NULL));

    int qtd_senhas, min_caracteres, max_caracteres;
    int incluir_maiusculas, incluir_minusculas, incluir_numeros, incluir_especiais;

    printf("Quantidade de senhas a serem geradas: ");
    scanf("%d", &qtd_senhas);

    printf("Quantidade mínima de caracteres: ");
    scanf("%d", &min_caracteres);

    printf("Quantidade máxima de caracteres: ");
    scanf("%d", &max_caracteres);

    printf("Incluir letras maiúsculas? (1 - Sim, 0 - Não): ");
    scanf("%d", &incluir_maiusculas);

    printf("Incluir letras minúsculas? (1 - Sim, 0 - Não): ");
    scanf("%d", &incluir_minusculas);

    printf("Incluir números? (1 - Sim, 0 - Não): ");
    scanf("%d", &incluir_numeros);

    printf("Incluir caracteres especiais? (1 - Sim, 0 - Não): ");
    scanf("%d", &incluir_especiais);

    // Abrir o arquivo para escrita
    FILE* arquivo = fopen("senhas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    for (int i = 0; i < qtd_senhas; i++) {
        char* senha = gerar_senha(min_caracteres, max_caracteres, incluir_maiusculas, incluir_minusculas, incluir_numeros, incluir_especiais);

        // Escrever a senha no arquivo
        fprintf(arquivo, "%s\n", senha);

        free(senha);
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("Senhas geradas com sucesso! Verifique o arquivo 'senhas.txt'\n");

    return 0;
}
