
# include < iostream >
/ * Hagamos un cuadrado * /
int  main () {
    int lado;
    char salir;
    int col, fil;
    std :: cout << " de que tamaño quieres el cuadrado: " ;
    std :: cin >> lado;
    std :: cout << " \ n " ;
    para (col = 1 ; col <= lado; col ++) {
               para (fil = 1 ; fil <= lado; fil ++) {
               std :: cout << " * " ;         
               }
               std :: cout << " \ n " ;
    }
    
    std :: cin >> salir;
}
//asesorado por Laarriba
