typedef struct fecha{
    int dd, mm, aa;
}date;

typedef struct reparaciones{
    date fechaR;    //Fecha de reparacion
    char trabajo[20];   //trabajo realizado sobre el dispositivo
    float costo;
}rep;

typedef struct infoDispositivo{
    int numSerie;
    char marca [20], modelo[20];
    date fechaC;   //Fecha de compra;
    rep reparacion; //Datos de la reparacion
}infoD;

int opcion()
{   //Seleccion de la accion
    int opc;
    printf("Escoja la accion a realizar...: ");
    scanf("%d", &opc);
    return opc;
}

void menu(){
    int opc;

    do{
        printf("Ingrese la accion a realizar");
        opc=opcion();
        switch(opc){

            case 1:

            break;

            case 2:

            break;

            case 3:

            break;

            case 4:

            break;

            case 5:

            break;
        }

    }while(opc<1 || opc>5);

}

