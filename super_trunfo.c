#include <stdio.h>

int main(){

    char estado[1];
    char codigocarta[2];
    char cidade[20];    //caracteres
    int hab;
    int ptur;
    float area;
    float pib;
   
/* estado - uma letra de A - H (utiliza-se apenas uma letra para poder funcionar o input do usuario)
codigocarta - letra do estado + 2 numeros de 01 - 04;   cidade - nome da cidade 
hab - população da cidade ; ptur - quantidade de pontos turisticos ; area : area em km² ; pib - pib da cidade. */

printf("Digite a primeira letra do Estado: \n");
scanf("%s"); (&estado);

printf("Digite um numero de 01-04: \n");
scanf("%s"); (&codigocarta);

printf("Digite o nome da cidade: \n");
scanf("%s"); (&cidade);

printf("Digite a quantidade de habitantes da cidade", &cidade, ": \n");
scanf("A quantidade de habitantes da cidade", &cidade, "é de: %d"); (&hab);

printf("Digite a quantidade de pontos turisticos da cidade: \n");
scanf("A quantidade de pontos turisticos da cidade", &cidade, "é de: %d"); (&ptur);





//impressao

printf("Estado: %s -  Codigo da Carta: %s, %s \n", estado, estado, codigocarta);
printf("Nome da Cidade: %s \n", cidade);
prinft("Quantidade de Habitantes: %d - Quantidade de Pontos Turísticos: %d", hab, ptur);

return 0;

}