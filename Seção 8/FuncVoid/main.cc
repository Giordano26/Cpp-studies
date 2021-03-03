#include <iostream>

using namespace std;

/*
    Podemos informar ao compilador que a função existe
    e que iremos declarar ela posteriormente 
    isso é feito através do protótipo de função
    coloque apenas o cabeçalho da função e ";"
*/

//protótipos
void msg();
float soma(float n1, float n2);
//


int main(){

    float n1,n2;


    msg();
    cout<<"Digite dois números flutuantes: "<<endl;
    cin>>n1;
    cin>>n2;
    cout<<"Soma entre "<<n1<<" e "<<n2<<" é = "<<soma(n1,n2);
    system("PAUSE");

    return 0;
}

void msg(){
    cout<<"Mensagem vinda da função sem retorno...";
}