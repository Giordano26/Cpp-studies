#include <iostream>
#include <string>

using namespace std;


int main(){

    int numeroInteiro {12}; //atribuição com chaves
    float numeroReal {34.56};
    char caracter {'c'};
    string texto {"Cadeia de caracteres kkkkkkkkk"};

    printf("Valor do Número Inteiro = %d\nNúmero Real = %.2f\nCaracter: %c\nTexto : %s\n", numeroInteiro,
    numeroReal, caracter, texto.c_str());

    cout<<"Texto da String (cout): "<< texto << "\n";

    printf("O valor do caracter: '%c' na tabela ASCII é: %d \n", caracter,caracter);

    

    /*
        %d inteiro
        %f ponto flutuante
        %lf double
        %c char
        %s String

    */
    


    system("PAUSE");



    return 0;
}