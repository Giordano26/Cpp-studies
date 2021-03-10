#include <iostream>


int contadorChamadasStatic(){

    static int numChamdas = 0;
    numChamdas++;
    return numChamdas;
}

int contadorChamadas(){

    int numChamdas = 0;
    numChamdas++;
    return numChamdas;
}


int main(){


    //aqui como o método é estático, a variavel guarda seu ultimo valor recebido 
    //sendo assim numChamadas chega a 5 numa execução do código
    std::cout<<"Método estático: "<<std::endl;
    for(int i = 0; i < 5; i++ ){
        std::cout<< contadorChamadasStatic()<<std::endl;
    }

    //aqui a como a variavel não é estática, seu último valor recebido não é guardado
    //sendo assim numChamadas continua com 1 numa execução
    std::cout<<"Método não estático: "<<std::endl;
    for(int i = 0; i < 5; i++ ){
        std::cout<< contadorChamadas()<<std::endl;
    }

    system("PAUSE");


    return 0;
}