#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "calculadora.hpp"

long double soma(long double n1, long double n2){
    return n1+n2;
}

long double sub(long double n1, long double n2){
    return n1-n2;
}

long double div(long double n1, long double n2){
    if(n2 == 0){
        std::cout<<"Divisão por Zero impossível!"<<std::endl;
        return 0;
    }
    else
        return n1/n2;
}

long double mult(long double n1, long double n2){
    return n1*n2;
}

long double pot(long double n1, long double n2){
    return pow(n1,n2);
}

long double raiz(long double n1){
    return sqrtl(n1);
}
void quit(){
    char op;

    std::cout<<"Deseja sair? (s/n)"<<std::endl;;
    std::cin>>op;

    if(op == 's'){
        std::cout<<"Saída requisitada! Desligando..."<<std::endl;
        system("PAUSE");
        exit(0);
    }else{
        std::cout<<"Reiniciando..."<<std::endl;;
    }

}

long double calc(char op){

    long double n1,n2;

     switch(op)
    {
    case '+': 

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n1;

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n2;

        return soma(n1,n2);

    case '-': 

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n1;

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n2;

        return sub(n1,n2);
        
    case '*': 

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n1;

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n2;

        return mult(n1,n2);
    case '/': 

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n1;

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n2;

        return div(n1,n2);

    case 'p':

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n1;

        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n2;

        return pot(n1,n2);
    case 'r': 
      
        std::cout<<"Digite primeiro número"<<std::endl;
        std::cin>> n1;
        return raiz(n1);

    default: return 666;
    }



}

char testOP(){

    char op;

    std::cin>>op;

    switch(op)
    {
    case '+': return '+';
    case '-': return '-';
    case '*': return '*';
    case '/': return '/';
    case 'p': return 'p';
    case 'r': return 'r';
    
    default: std::cout<<"Opção inválida!"<<std::endl; return 'e';
        break;
    }

    

}

void result(long double n1){

    std::cout<<"Resultado: "<<n1<<std::endl;

}

void interface(){

    std::cout<<"Selecione uma operação!"<<std::endl;
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
