#include <stdio.h>
#include <stdlib.h>
typedef struct viajesRealizados
{
    char matricula[10];
    char categoria;
    float carga;

} t_viaje;

int elegiropc()
{

    int opc;
    printf("Ingrese la accion a realizar \n1: Carga de viajes\n2: Calcular total de categorias\n3: Matricula de mayor carga\n4: Salir del programa  \n");
    scanf("%d", &opc);
    system("pause");
    system("cls");
    return opc;

}

int menu()
{
    int opc;
    int cantViajes;
    t_viaje viajes[750];
    do
    {
        opc=elegiropc();
        switch(opc)
        {
        case 1:
            cantViajes=cargaViaje(viajes);
        break;

        case 2:
            cantidadCategorias(viajes, cantViajes);
        break;

        case 3:
            mayorCarga(viajes, cantViajes);
        break;

        case 4:
            exit(0);
        break;
        }

    }while(opc<1||opc>4);
    return opc;

}
char cargaCategoria()
{
    char categoria;

    do{
        fflush(stdin);
        scanf("%c", &categoria);

        if(categoria!='A'&&categoria!='B'&&categoria!='C'){
            printf("La categoria debe ser A, B o C. Por favor ingrese otra vez.\n");
        }

    }
    while(categoria!='A'&&categoria!='B'&categoria!='C');

    return categoria;


}

float cargaCarga( t_viaje viajes){
    int carga;
    if(viajes.categoria=='A'||viajes.categoria=='B'){
        do{
            fflush(stdin);
            scanf("%d", &carga);

            if(carga>20000|| carga<1){
                printf("La carga debe ser menor a 20000 toneladas y superior a 0, ingrese otra vez por favor.\n");
            }

        }while(carga>20000|| carga<1);
    }
    else{
        do{
            fflush(stdin);
            scanf("%d", &carga);

            if(carga<15000|| carga>45000){
                printf("La carga debe ser superior a 15000 e inferior a 45000 toneladas, ingrese otra vez por favor.\n");
            }

        }while(carga<15000|| carga>45000);
    }

    return carga;
}



int cargaViaje(t_viaje travel[])
{
    int i=0;
    char fin;
    t_viaje viajes;
    do{
        printf("Ingrese la informacion del viaje:\n");
        printf("Ingrese la matricula del viaje: ");
        fflush(stdin);
        scanf("%s", &viajes.matricula);
        printf("Ingrese la categoria del viaje: ");
        viajes.categoria=cargaCategoria();
        printf("Ingrese la carga del viaje: ");
        viajes.carga=cargaCarga(viajes);

        strcpy(travel[i].matricula,viajes.matricula);
        travel[i].carga=viajes.carga;
        travel[i].categoria=viajes.categoria;

        i++;
        printf("Para finalizar la carga ingrese *, para continuar pulse otra tecla\n");
        fflush(stdin);
        scanf("%c", &fin);

    }
    while(fin!='*');
    system("pause");
    system("cls");
    return i;
}

void cantidadCategorias(t_viaje viajes[], int n){

    float cargaA=0, cargaB=0, cargaC=0;
    int i;

    for(i=0; i<n; i++){
        if(viajes[i].categoria=='A') cargaA+=viajes[i].carga;

        else if(viajes[i].categoria=='B') cargaB+=viajes[i].carga;

        else cargaC+=viajes[i].carga;
    }

    printf("Viajes de categoria:\nA: %f\nB: %f\nC: %f", cargaA, cargaB, cargaC);
    system("pause");
    system("cls");


}

void mayorCarga(t_viaje viajes[], int n){
    int i, posicion;
    float mayor=0;
    for(i=0; i<n;i++){
        if(viajes[i].categoria=='B'){
            if(viajes[i].carga>mayor){
                mayor=viajes[i].carga;
                posicion=i;
            }
        }
    }
     system("pause");
    printf("La matricula de la mayor carga de categoria B es %s", viajes[posicion].matricula);
    system("pause");

}

