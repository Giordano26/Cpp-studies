#include <iostream>
#include "mat01.hpp"
#include "mat02.hpp"


//overload de funções sendo resolvido com namespace, mesmo nome de função porém com namespaces diferentes 

int main(){

    std::cout<<"A soma de 10 com 20*2: "<< mat01::soma(10,20)<<std::endl;

    std::cout<<"A soma de 10 com 20: "<< mat02::soma(10,20)<<std::endl;

    system("PAUSE");


    return 0;
}