#include <stdio.h>
#include <stdlib.h>
#include "estructuras.c"

void ff(){
    fflush(stdin);
}


void cargaDato(infoD infoDis[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("Ingrese la informacion del dispositivo n %d \n", i+1);

        do{
            printf("Ingrese el numero de serie del dispositivo: ");
            scanf("%d", &infoDis[i].numSerie);
        }while(validaSerie(infoDis, i, n)>0);

        printf("Ingrese la marca del dispositivo: ");
        scanf("%s", &infoDis[i].marca);

        printf("Ingrese el modelo del dispositivo: ");
        scanf("%s", &infoDis[i].modelo);


        do{
            printf("Ingrese la fecha de compra: ");
            scanf("%d %d %d", &infoDis[i].fechaC.dd , &infoDis[i].fechaC.mm, &infoDis[i].fechaC.aa);

        }while(validaFecha(infoDis, i)>0 );
        clear();
    }

}

