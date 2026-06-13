#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

//Função para validar se o numero do codigo da carta esta entre 1 e 4
int readNumber() {
  int number;
  scanf("%d", &number);
  if(number < 1 || number > 4) {
    printf("###############################################\n");
    printf("ERRO: O número da carta deve ser entre 1 e 4. Por favor, digite um número válido.\n");
    printf("###############################################\n");
    printf("Digite o número da carta ela deve ser de 01 a 04 \n");
    printf("Esse número sera composto com a letra do estado para formar o código da carta, por exemplo: A01, B03, etc. \n");
    scanf("%d", &number);
  }
  return number;
}

// Função para validar se a letra e o número da primeira carta é igual ao da segunda digitada
void validateDifferentCard(char stateLetter1[], int numberLetter1, char stateLetter2[], int *numberLetter2) {
  if(stateLetter1[0] == stateLetter2[0] && numberLetter1 == *numberLetter2) {
    printf("###############################################\n");
    printf("ERRO: O código da segunda carta é igual ao da primeira carta. Por favor, escolha um código diferente.\n\n");
    printf("###############################################\n");
    printf("Digite uma letra de A a H, ela representa um dos oito estados: \n");
    scanf("%s", stateLetter2);

    printf("Digite o número da carta ela deve ser de 01 a 04 \n");
    printf("Esse número sera composto com a letra do estado para formar o código da carta, por exemplo: A01, B03, etc. \n");
    //Valida se o numero digitado esta entre 1 e 4
    *numberLetter2 = readNumber();
  }
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char stateLetter1[2], stateLetter2[2];
  int numberLetter1, numberLetter2;
  char codLetter1[4], codLetter2[4];
  char cityNameLetter1[30], cityNameLetter2[30];
  int inhabitantsLetter1, inhabitantsLetter2;
  float areaLetter1, areaLetter2;
  float pibLetter1, pibLetter2;
  int touristSpotsLetter1, touristSpotsLetter2;

  // Área para entrada de dados
  printf("\nVamos começar a cadastrar as cartas do jogo!\n");
  printf("##################################################\n");
  printf("\nCada carta representa um estado brasileiro com sua cidade, e cada cidade possui: \nUm código, nome, população, área, PIB, número de pontos turísticos.\n\n"); 
  printf("##################################################\n");
  printf("Vamos começar cadastrando a 1º carta:\n\n");

  printf("Digite uma letra de A a H, ela representa um dos oito estados: \n");
  scanf("%s", stateLetter1);

  printf("Digite o número da carta, ele deve ser entre 1 a 4 \n");
  printf("Esse número sera composto com a letra do estado para formar o código da carta. \n");
  numberLetter1 = readNumber();
  
  //Concatena a letra do estado digitado mais o numero da carta adicionando o 0 para ficar no formato desejado
  sprintf(codLetter1, "%c0%d", stateLetter1[0], numberLetter1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cityNameLetter1);

  printf("Digite a população da cidade: \n");
  scanf("%d", &inhabitantsLetter1);

  printf("Digite a área da cidade em km²: \n");
  scanf("%f", &areaLetter1);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pibLetter1);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &touristSpotsLetter1);

  printf("##############################################################\n");
  printf("Agora vamos começar cadastrando a 2º carta:\n");
  printf("###############################################################\n");

  printf("Digite uma letra de A a H, ela representa um dos oito estados: \n");
  scanf("%s", stateLetter2);

  printf("Digite o número da carta ela deve ser de 01 a 04 \n");
  printf("Esse número sera composto com a letra do estado para formar o código da carta. \n");
  numberLetter2 = readNumber();

  //Função para validar se a letra do estado digitado mais o numero da carta 2 é igual ao da carta 1
  validateDifferentCard(stateLetter1, numberLetter1, stateLetter2, &numberLetter2);

  //Concatena a letra do estado digitado mais o numero da carta adicionando o 0 para ficar no formato desejado
  sprintf(codLetter2, "%c0%d", stateLetter2[0], numberLetter2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cityNameLetter2);

  printf("Digite a população da cidade: \n");
  scanf("%d", &inhabitantsLetter2);

  printf("Digite a área da cidade em km²: \n");
  scanf("%f", &areaLetter2);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pibLetter2);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &touristSpotsLetter2);

   // Área para exibição dos dados da cidade
  //Exibe os dados da primeira carta
  printf("\nPrimeira carta cadastrada:\n");

  {
    printf("Código: %s\n", codLetter1);
    printf("Cidade: %s\n", cityNameLetter1);
    printf("População: %d\n", inhabitantsLetter1);
    printf("Área: %.2f km²\n", areaLetter1);
    printf("PIB: %.2f\n", pibLetter1);
    printf("Pontos Turísticos: %d\n", touristSpotsLetter1);
  }

  //Exibe os dados dasegunda carta
  printf("\nSegunda carta cadastrada:\n");
  {
    printf("Código: %s\n", codLetter2);
    printf("Cidade: %s\n", cityNameLetter2);
    printf("População: %d\n", inhabitantsLetter2);
    printf("Área: %.2f km²\n", areaLetter2);
    printf("PIB: %.2f\n", pibLetter2);
    printf("Pontos Turísticos: %d\n", touristSpotsLetter2);
  }

  return 0;
};