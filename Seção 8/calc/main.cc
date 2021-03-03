#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

// --------------------------------------------------------
long double calc(char op, long double n1,  long double n2);
void menu();
// --------------------------------------------------------


int main(){
    char op,quit;
    long double n1,n2;

    do{
        menu();
        cin>>op;
        if(op == 'r'){
            cout<<"Digite um número: "<<endl;
            cin>>n1;
            cout<<"Resultado da operação: "<< calc(op,n1,0) <<endl;
        }else{
            cout<<"Digite 2 números: "<<endl;
            cin>>n1;
            cin>>n2;
            cout<<"Resultado da operação: "<< calc(op,n1,n2) <<endl;

        }


        cout<<"Deseja sair? (s/n)"<<endl;
        cin>>quit;
        if(quit == 's' || quit == 'S'){
            cout<<"Saída requisitada! Desligando..."<<endl;
            exit(0);
        }
    }while(true);

    return 0;
}


// -------------------------------------------------------------------------------------------------


long double calc(char op, long double n1, long double n2 ){

    switch(op){
        case '+': return n1+n2;
        case '-': return n1-n2;
        case '/': return n1/n2;
        case '*': return n1*n2;
        case 'p': return pow(n1,n2);
        case 'r': return sqrtl(n1);
        default: cout<<"Operação Inválida!";
                 break;
    }
}

void menu(){
    cout<<"Selecione uma operação!"<<endl;
    printf(
    " ___________________________\n"
    "|        CALCULADORA        |\n"  
    "|                           |\n"
    "|    + Adição               |\n"
    "|                           |\n"
    "|    - Subtração            |\n"
    "|                           |\n"
    "|    * Multiplicação        |\n"
    "|                           |\n"
    "|    / Divisão              |\n"
    "|                           |\n"
    "|    p Potenciação          |\n"
    "|                           |\n"
    "|    r Raiz Quadrada        |\n"
    "|___________________________|\n"
    "Operação selecionada: ");
}
