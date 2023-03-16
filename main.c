#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CalculaIMC(float peso, float altura) {

    float Altura = altura;
    float Peso = peso;
    float imc = Peso / pow(Altura, 2);

    return imc;

}

int main()
{

    char nome[50];
    char sexo[15];
    int idade;
    float altura, peso;

    printf("<----- Calculo de IMC -----> \n");

    printf("Digite seu Nome: ");
    scanf("%s", nome);

    printf("Digite seu Sexo: ");
    scanf("%s", sexo);

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Digite sua Altura em Metros: ");
    scanf("%f", &altura);

    printf("Digite seu Peso em Kilogramas: ");
    scanf("%f", &peso);

    float IMC = CalculaIMC(peso, altura);
    printf("Dados -> Nome: %s | Sexo: %s | Idade: %d anos | Peso: %.2fkg | Altura: %.2fm \n", nome, sexo, idade, peso, altura, IMC);

        if (IMC < 18.5) {

            printf("Seu IMC: %.2f | Voce esta abaixo do Peso Normal", IMC);

        } else if (IMC >= 18.5 && IMC <= 24.9) {

            printf("Seu IMC: %.2f | Voce esta no Peso Normal", IMC);

        } else if(IMC > 24.9 && IMC <= 29.9) {

            printf("Seu IMC: %.2f | Voce esta com Excesso de Peso", IMC);

        } else if (IMC > 29.9 && IMC <= 34.9) {

            printf("Seu IMC: %.2f | Voce esta em Obesidade Classe I", IMC);

        } else if(IMC > 34.9 && IMC <= 39.9) {

            printf("Seu IMC: %.2f | Voce esta em Obesidade Classe II", IMC);

        } else if(IMC >= 40) {

            printf("Seu IMC: %.2f | Voce esta em Obesidade Classe III", IMC);

        } else {

            printf("Alguma coisa deu errado, tente novamente.");

        }




}
