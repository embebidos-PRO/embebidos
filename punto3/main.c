#include <stdio.h>
char valores[3]="";
void error(void);
void descomposicion(unsigned int entrada);
void imprimir(void);
void uno(unsigned char linea);
void dos(unsigned char linea);
void tres(unsigned char linea);
void cuatro(unsigned char linea);
void cinco(unsigned char linea);
void seis(unsigned char linea);
void siete(unsigned char linea);
void ocho(unsigned char linea);
void nueve(unsigned char linea);
void cero(unsigned char linea);
int main()
{
    while(1){
        unsigned int entrada = 0;
        printf("Introduzca valor de entrada: ");
        scanf("%u",&entrada);
        if(entrada>999 || entrada <0){
            error();
        }else{
            descomposicion(entrada);
            imprimir();
        }

    }

    return 0;
}
void error(void){
    printf("Número fuera del rango, ingrese otro\nR");

}
void descomposicion(unsigned int entrada){
    valores[0] = floor(entrada/100);
    valores[1] = floor((entrada/10)%10);
    valores[2] = floor(entrada%10);
}
void imprimir(void){
    for(unsigned short i =0;i<7;i++){

        if(valores[0]==1){
        printf(" ");
        uno(i);
        }
        if(valores[0]==2){
        printf(" ");
        dos(i);
        }
        if(valores[0]==3){
        printf(" ");
        tres(i);
        }
        if(valores[0]==4){
        printf(" ");
        cuatro(i);
        }
        if(valores[0]==5){
        printf(" ");
        cinco(i);
        }
        if(valores[0]==6){
        printf(" ");
        seis(i);
        }
        if(valores[0]==7){
        printf(" ");
        siete(i);
        }
        if(valores[0]==8){
        printf(" ");
        ocho(i);
        }
        if(valores[0]==9){
        printf(" ");
        nueve(i);
        }
        if(valores[0]==0){
        printf(" ");
        cero(i);
        }

        if(valores[1]==1){
        printf(" ");
        uno(i);
        }
        if(valores[1]==2){
        printf(" ");
        dos(i);
        }
        if(valores[1]==3){
        printf(" ");
        tres(i);
        }
        if(valores[1]==4){
        printf(" ");
        cuatro(i);
        }
        if(valores[1]==5){
        printf(" ");
        cinco(i);
        }
        if(valores[1]==6){
        printf(" ");
        seis(i);
        }
        if(valores[1]==7){
        printf(" ");
        siete(i);
        }
        if(valores[1]==8){
        printf(" ");
        ocho(i);
        }
        if(valores[1]==9){
        printf(" ");
        nueve(i);
        }
        if(valores[1]==0){
        printf(" ");
        cero(i);
        }


        if(valores[2]==1){
        printf(" ");
        uno(i);
        }
        if(valores[2]==2){
        printf(" ");
        dos(i);
        }
        if(valores[2]==3){
        printf(" ");
        tres(i);
        }
        if(valores[2]==4){
        printf(" ");
        cuatro(i);
        }
        if(valores[2]==5){
        printf(" ");
        cinco(i);
        }
        if(valores[2]==6){
        printf(" ");
        seis(i);
        }
        if(valores[2]==7){
        printf(" ");
        siete(i);
        }
        if(valores[2]==8){
        printf(" ");
        ocho(i);
        }
        if(valores[2]==9){
        printf(" ");
        nueve(i);
        }
        if(valores[2]==0){
        printf(" ");
        cero(i);
        }


        printf("\n");
        }
    }

void uno(unsigned char linea){
    char numero[7][4]= {
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|'

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
void dos(unsigned char linea){
    char numero[7][4]= {
        '-','-','-',' ',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ','-','-',' ',
        '|',' ',' ',' ',
        '|',' ',' ',' ',
        ' ','-','-','-'

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
void tres(unsigned char linea){
    char numero[7][4]= {
        '-','-','-',' ',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        '-','-','-',' ',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        '-','-','-',' '

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
void cuatro(unsigned char linea){
    char numero[7][4]= {
        '|',' ',' ','|',
        '|',' ',' ','|',
        '|',' ',' ','|',
        ' ','-','-',' ',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|'

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
void cinco(unsigned char linea){
    char numero[7][4]= {
        ' ','-','-','-',
        '|',' ',' ',' ',
        '|',' ',' ',' ',
        ' ','-','-',' ',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        '-','-','-',' '

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
void seis(unsigned char linea){
    char numero[7][4]= {
        ' ','-','-','-',
        '|',' ',' ',' ',
        '|',' ',' ',' ',
        ' ','-','-',' ',
        '|',' ',' ','|',
        '|',' ',' ','|',
        ' ','-','-',' '

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
void siete(unsigned char linea){
    char numero[7][4]= {
        '-','-','-',' ',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|'

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
void ocho(unsigned char linea){
    char numero[7][4]= {
        ' ','-','-',' ',
        '|',' ',' ','|',
        '|',' ',' ','|',
        ' ','-','-',' ',
        '|',' ',' ','|',
        '|',' ',' ','|',
        ' ','-','-',' '

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
void nueve(unsigned char linea){
    char numero[7][4]= {
        ' ','-','-',' ',
        '|',' ',' ','|',
        '|',' ',' ','|',
        ' ','-','-',' ',
        ' ',' ',' ','|',
        ' ',' ',' ','|',
        ' ',' ',' ','|'

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
void cero(unsigned char linea){
    char numero[7][4]= {
        ' ','-','-',' ',
        '|',' ',' ','|',
        '|',' ',' ','|',
        '|',' ',' ','|',
        '|',' ',' ','|',
        '|',' ',' ','|',
        ' ','-','-',' '

    };
    printf("%c",numero[linea][0]);
    printf("%c",numero[linea][1]);
    printf("%c",numero[linea][2]);
    printf("%c",numero[linea][3]);
}
