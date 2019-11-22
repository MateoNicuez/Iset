#include <stdio.h>
#include <stdlib.h>
#include "estructuras.c"

void clear(){
    system("pause");
    system("cls");
}

int cantDis(){  //Ingresa la cantidad de dispositivos
    int n;

    printf("Escoja la cantidad de dispositivos: ");
    ff();
    scanf("%d", &n);
    clear();

    return n;
}


int opcion()
{   //Seleccion de la accion
    int opc;

    printf("Escoja la accion a realizar...: ");
    ff();
    scanf("%d", &opc);
    clear();

    return opc;
}



int menu(){
    int opc, n;
    n=cantDis();

    infoD infoDis[n];

    printf("----Menu Principal----\n");
    do{
        opc=opcion();
        switch(opc){

            case 1:
                cargaDato(infoDis, n);
            break;

            case 2:

            break;

            case 3:

            break;

            case 4:

            break;

            case 5:
                exit(0);

            break;
        }

    }while(opc<1 || opc>5);

    return opc;
}

