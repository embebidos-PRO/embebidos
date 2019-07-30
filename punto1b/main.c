#include <stdio.h>
unsigned long int solucion(unsigned long int X, unsigned long int Y, unsigned long int D);
int main()
{
    printf("El numero es: %lu\n",solucion(10,85,30));
    return 0;
}
unsigned long int solucion(unsigned long int X, unsigned long int Y, unsigned long int D){
    unsigned long int saltos = 0;
    for(saltos;1;++saltos){
        if(Y<=X+D*saltos){
            break;
        }
    }
return saltos;
}
