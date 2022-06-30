#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<string>

using namespace std;

void limpaTela()
{
    system("cls");
}

void menuInicial()
{
    int opcao = 0;
    bool run = true;
    while(run)
    {
        limpaTela();
        cout<<"Bem-Vindo ao Jogo\n1 - Jogar\n2 - Sobre\n3 - Sair\nEScolha uma opção e tecle Enter:";
        cin>>opcao;

        switch(opcao)
        {
        case 1:
            cout<<"Jogo Iniciado";
            break;
        case 2:
            cout<<"Informações do jogo";
            break;
        case 3:
            run = false;
            break;
        default:
            cout<<"Opção inválida";
            run = false;
            break;
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    menuInicial();
    return 0;
}
