#include <stdio.h>

int main() {
  // Declarando as variáveis para armazenar as escolhas do jogador
  int classe, territorio, arma;

  // Exibindo as opções de classe para o jogador
  printf("Escolha uma classe:\n");
  printf("1. Guerreiro\n");
  printf("2. Mago\n");
  printf("3. Druida\n");
  printf("4. Sacerdote\n");
  scanf("%d", &classe);

  // Exibindo as opções de território para o jogador
  printf("Escolha um território:\n");
  printf("1. Azeroth\n");
  printf("2. Azkaban\n");
  printf("3. Aurora\n");
  printf("4. Brightwood\n");
  scanf("%d", &territorio);

  // Exibindo as opções de arma para o jogador
  printf("Escolha uma arma:\n");
  printf("1. Machado cego\n");
  printf("2. Picareta invertida\n");
  printf("3. Adaga sem ponta\n");
  printf("4. Corrente sem elo\n");
  scanf("%d", &arma);

  // Exibindo a mensagem com as escolhas do jogador
  printf("Você agora é um ");
  switch (classe) {
    case 1:
      printf("Guerreiro");
      break;
    case 2:
      printf("Mago");
      break;
    case 3:
      printf("Druida");
      break;
    case 4:
      printf("Sacerdote");
      break;
    default:
      printf("Escolha inválida");
      break;
  }
  printf(" da região de ");
  switch (territorio) {
    case 1:
      printf("Azeroth");
      break;
    case 2:
      printf("Azkaban");
      break;
    case 3:
      printf("Aurora");
      break;
    case 4:
      printf("Brightwood");
      break;
    default:
      printf("Escolha inválida");
      break;
  }
  printf(" armado com ");
  switch (arma) {
    case 1:
      printf("um Machado cego");
      break;
    case 2:
      printf("uma Picareta invertida");
      break;
    case 3:
      printf("uma Adaga sem ponta");
      break;
    case 4:
      printf("uma Corrente sem elo");
      break;
    default:
      printf("Escolha inválida");
      break;
  }
  printf(".\n");

  return 0;
}
