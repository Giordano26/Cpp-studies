#include <iostream>

using namespace std;


int main(){

    int var1 = 100;
    float var2 = 14.5;
    double var3 = 55.67;
    char var4 = 'C';

    cout<<"Valor de var1 = "<<var1<<endl;
    cout<<"Tamanho de var1 = "<<sizeof(var1)<<" bytes"<< endl;
    cout<<"Endereço de var1 = "<<&var1<<endl;

    cout<<"Valor de var2 = "<<var2<<endl;
    cout<<"Tamanho de var2 = "<<sizeof(var2)<<" bytes"<<endl;
    cout<<"Endereço de var2 = "<<&var2<<endl;

    cout<<"Valor de var3 = "<<var3<<endl;
    cout<<"Tamanho de var3 = "<<sizeof(var3)<<" bytes"<<endl;
    cout<<"Endereço de var3 = "<<&var3<<endl;

    cout<<"Valor de var4 = "<<var4<<endl;
    cout<<"Tamanho de var4 = "<<sizeof(var4)<<" bytes"<<endl;
    cout<<"Endereço de var4 = "<<(void *)&var4<<endl;

    system("PAUSE");




    return 0;
}