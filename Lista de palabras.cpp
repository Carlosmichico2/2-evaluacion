#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int devuelve_longitud(char aux[]){
    int cont=0;
    int longitud=0;
    while(aux[cont]!='\0'){
                           longitud++;
                           cont++;
                           
                           
                           return(longitud);
    }
}
int main(){
    char *palabras[4];
    int cont;
    char salir;
    char aux[20];
    int longitud;
    //Leo cuatro palabras
    for(cont=0; cont<4;cont++){
                               std::cout<<"palabra: ";
                               std::cin>>aux;
                               longitud=devuelve_longitud(aux);
                               palabras[cont]=(char *) malloc((longitud+1)*sizeof(char));//Reserva
                               std::cout<<longitud;
                               strcpy(palabras[cont],aux);
     }
    std::cout<<"\nLISTA DE PALABRAS\n";
    for(cont=0;cont<4;cont++){
                               printf("%s\n",palabras[cont]);
                               
     }
     //ORDENAMOS POR EL METODO DE LA BURBUJA
     for(veces=1;veces<4;veces++){
         for (cont=0;cont<3;cont++){
             if(strcmp (palabras[cont],palabras[cont+1])<0{
                                                           p_aux=palabras[cont];
                                                           palabras[cont]=palabras[cont+1]
                                                           }
                                                           }
                                                           }
                                                           
     std::cout<<"\nLISTA DE PALABRAS ORDENADAS\n";
     for (cont=0;cont<4;cont++){
                                printf(
    
    
    
    
    
    std::cin>>salir;
}
