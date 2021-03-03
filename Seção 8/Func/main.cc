#include <iostream>

using namespace std;

int Somanumero(int n1, int n2){
    return n1+n2;
}

int main(){

    int n1,n2;

    cout<< "Digite dois número"<<endl;
    cin>>n1;
    cin>>n2;
    cout<<"Soma entre "<<n1<<" e "<<n2<<" é = "<<Somanumero(n1,n2)<<endl;
    
    system("PAUSE");


    return 0;
}