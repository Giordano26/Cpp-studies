#include <iostream>
//#include <tchar.h> //lib pra deixar o console aceitar char pt-br

using namespace std;

int main(){

    //_tsetlocale(LC_ALL, _T("portuguese")); //seta o shell pra ptbr

    int numVidas = 5;
    int score = 1350;

    cout<<"*******************"<<endl;
    cout<<"Vidas jogador: "<<numVidas<<endl;
    cout<<"Score: "<<score<<endl;
    cout<<"Endereço que numVidas ocupa na memória RAM: "<< &numVidas <<endl;
    cout<<"Tamanho da variável numVidas: "<<sizeof(numVidas)<<" Bytes"<<endl;
    cout<<"Endereço que Score ocupa na memória RAM: "<< &score <<endl;
    cout<<"Tamanho da variável Score: "<<sizeof(score)<<" Bytes"<<endl;
    cout<<"*******************"<<endl;
    
    system("PAUSE");

    return 0;
}