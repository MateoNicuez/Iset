typedef struct viajesRealizados
{
    char matricula[10];
    char categoria;
    float carga;

} t_viaje;

int elegiropc();
int menu();
int cargaViaje(t_viaje travel[]);
char cargaCategoria();
float cargaCarga(t_viaje viajes);
void cantidadCategorias(t_viaje viajes[], int n);
void mayorCarga(t_viaje viajes[], int n);
