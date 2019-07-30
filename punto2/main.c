#include <stdio.h>
unsigned long solucion(unsigned long A, unsigned long B,unsigned long K);
int main()
{
    printf("Solucion: %d\n",solucion(6,25,2));
    return 0;
}
unsigned long solucion(unsigned long A, unsigned long B,unsigned long K){
    unsigned long contador = 0;
    unsigned long indice = 0;
    for(indice;indice<=B;indice+=K){
        //printf("resp: %d\n",indice);
        if(indice>=A){
            contador++;
        }
    }
return contador;
}
