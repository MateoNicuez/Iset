#include "estructuras.c"

int validaSerie(infoD serie[] , int i, int n){
    int j, repeticion=0;

    for(j=0; j<n; j++)
    {
        if(serie[i].numSerie == serie[j].numSerie){
            repeticion++;
        }
    }
    repeticion--;

    if(repeticion<=0) repeticion=0;

    else{
        repeticion=1;
        printf("El numero de serie ya existe, ingrese otro numero\n");
    }

    return repeticion;
}//Comprueba que el numero de serie sea unico

int validaFecha(infoD fecha[] , int i){
    int validacion;

    if(1>fecha[i].fechaC.dd || fecha[i].fechaC.dd>31 || fecha[i].fechaC.mm<1 || fecha[i].fechaC.mm >12 || fecha[i].fechaC.aa>2019 ){

        printf("La fecha ingresada no es valida\n");
        validacion=1;

    }
    else validacion=0;

    return validacion;
}//Limites de dia, mes y año

int comprobarFecha(infoD fechas[], int i){



}
