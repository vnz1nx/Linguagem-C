#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Com�ntario
    /*
    printf:Mostrar menssagem,mesma fun��o do sysout.
    system pause aplica uma fun��o de espera por comando.
    \n � utilizado para quebra de linha.
    ; � um delimitador de final de linha.
    */

    /*Oque s�o variaveis:
    � um local reservado na mermoria para armazenar um tipo de dado;
    Tendo sempre um indentificador:nome;
    E um tipo:
    Inteiro:numeros inteiros.
    Real:numeros com casas decimais/ponto flutantes.


    int:valores n�mericos inteiros.
    char:armazena caracteres.
    float:n�meros com ponto flutuante(reais),com precis�o simples.
    double:mesmo conceito de float,mas com precis�o dupla.


    */

    //Especificador de formato
    //int ==> %d
    //float ==> %f
    //char ==> %d
    //string ==> %s

    float numero1 = 20;
    float numero2= 10;

    printf("Hello world!\n");
    printf("O valor do numero e: %.3f\n", numero1/numero2);

    //Se a variavel n�o tem valor atribuido,mas ao usar print aparece informa��o,se chama lixo de memoria.
    //Por isso � importante sempre atribuir valor a variavell.


    char nome[80];
    char nome2[80];

    printf("Adicione um nome: ");
    scanf("%s",nome);

    printf("Adicione o segundo nome: ");
    scanf("%s",nome2);
    printf("");

    printf("nome1 e nome2: %s %s \n", nome ,nome2);
    printf("");

    system("pause");
    return 0;
}
