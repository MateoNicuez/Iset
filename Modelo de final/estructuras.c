typedef struct fecha{
    int dd, mm, aa;
}date;

typedef struct reparaciones{
    date fechaR;    //Fecha de reparacion
    char trabajo[20];   //trabajo realizado sobre el dispositivo
    float costo;
}rep;

typedef struct informacionDispositivo{
    int numSerie;
    char marca [20], modelo[20];
    date fechaC;   //Fecha de fechaC;
    rep reparacion; //Datos de la reparacion
}infoD;
