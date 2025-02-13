#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Coméntario
    /*
    printf:Mostrar menssagem,mesma função do sysout.
    system pause aplica uma função de espera por comando.
    \n é utilizado para quebra de linha.
    ; é um delimitador de final de linha.
    */

    /*Oque são variaveis:
    É um local reservado na mermoria para armazenar um tipo de dado;
    Tendo sempre um indentificador:nome;
    E um tipo:
    Inteiro:numeros inteiros.
    Real:numeros com casas decimais/ponto flutantes.


    int:valores númericos inteiros.
    char:armazena caracteres.
    float:números com ponto flutuante(reais),com precisão simples.
    double:mesmo conceito de float,mas com precisão dupla.


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

    //Se a variavel não tem valor atribuido,mas ao usar print aparece informação,se chama lixo de memoria.
    //Por isso é importante sempre atribuir valor a variavell.


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
