#include<iostream>

#include<iostream>

int main(){
    //definici�n de variables
    int ntabla;
    char salir;
    int cont;
    std::cout<<"que tabla deseas que te muestre: ";
    std::cin>>ntabla;
    std::cout <<"*****************************\n";
    std::cout <<"*     TABLA DEL ";
    std::cout << ntabla;
    std::cout <<"     *\n";
    std::cout <<"*****************************\n";
    for(cont=0;cont<=10;cont++){
                                std::cout<<ntabla*cont;
                                std::cout<<" x ";
                                std::cout<<cont;
                                std::cout<<" = ";
                                std::cout<<ntabla*cont;
                                std::cout"\n
                                
                                
    std::cin >> salir;
