#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){

    //Vari�veis
    char palavra[10];

    //Instru��o
    printf("Digite uma palavra");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //L� a String
    fgets(palavra, 255, stdin);

    //Limpa as casas n�o utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s", palavra);

    //Pausa o programa ap�s executar
    system("pause");

}
Com C++:

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Fun��o principal do programa
int main(){

    //Definindo uma String
    string palavra;

    //Imrpimindo na tela
    cout << "Digite uma palavra";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma vari�vel
    cout << "\nA palavra eh:" << palavra;

    //Pausa o programa ap�s executar
    system("pause");

    return 0;

}
