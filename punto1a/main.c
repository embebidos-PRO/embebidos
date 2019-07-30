#include <stdio.h>
#include <string.h>
#include <math.h>
void entrada(char entrada[]);
int xo =0, yo =0;
int nx = 0, ny = 0;
int main()
{
    char s[7];
    unsigned char diam =0;
    unsigned char count = 0, final = 0;
    unsigned char radio = 0;
    scanf("%d",&diam);
    radio = diam/2;
    scanf("%s",s);
    entrada(s);

    nx = xo;
    ny = yo;

    for(int n=1;n<14;n++){
        scanf("%s",s);
        entrada(s);
        nx+=xo;
        ny+=yo;
        if(sqrt(pow(nx,2)+pow(ny,2)) <radio){
            count++;
        }else{
            final = count;
        }

    }
    printf("El numero total es: %d\n",(int)final);

    return 0;
}

void entrada(char s[]){

    int x = 0, y = 0;
    int ub = strcspn(s,",");

    if(s[0]=='-'){
        x = (int)((-1)*(s[1]-48)*(pow(10,(ub-2))));
        if(s[2]!=','){
            x-=s[2]-48;
        }
    }
    if(s[0]!='-'){
        x = (int)((s[0]-48)*(pow(10,(ub-1))));
        if(s[1]!=','){
            x+=s[1]-48;
        }

    }
    //------------------------
    if(s[ub+1]=='-'){
        if(s[ub+3]>=48 && s[ub+3]<=57){
            y = (int)((-1)*(s[ub+2]-48)*10+(s[ub+3]-48));
        }else{
            y = (int)((-1)*(s[ub+2]-48));
        }
    }
    if(s[ub+1]!='-'){
        if(s[ub+2]>=48 && s[ub+2]<=57){
            y = (int)((s[ub+1]-48)*10+(s[ub+2]-48));
        }else{
            y = (int)((s[ub+1]-48));
        }
    }

    xo = x;
    yo = y;
}
