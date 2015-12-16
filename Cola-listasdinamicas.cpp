#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAXCOLA 5

struct structCola{
char nombre [MAXCOLA][50];
int frente;
int fin;

};
typedef struct structCola cola;

void crearcola(cola*micola);
int colavacia(cola*miicola);
int colallena(cola*micola)

void push(cola*micola,char nombre[]);
char *pop(cola*micola);
void mostrarfrente(cola*micola);
void imprimircola(cola*micola);

int main(){
cola micola;
int opcion;
char nombre[50];
char *nombreregreso;

crearcola(&micola);
do{
    clrscr();
    printf("[1] MENU ");
    printf("[2]  Insertar cola \n");
    printf("[3] Retirar de la cola \n");
    printf("[4] Mostrar frente de la cola \n");
    printf("[5] Mostrar la cola \n");
    printf( "Salir \n");
    printf("Opcion:");
    scanf("%d",opcion);

    switch(opcion){
case 1:
    if(colallena(&micola))
        printf("La cola esta llena.");
    else{
        printf("Escribe el nombre:");
        scanf("&[^\n]",nombre);
        push(&micola,nombre);
        printf("Se ha insertado  %s en la cola",nombre);

    }break;
case 2:
    clrscr();
    if(colavacia(&micola))
        pintf("cola vacia");
    else{

        nombreregreso=pop(&micola);
        strcpy(nombre,nombreregreso);
        printf("Se ha retirado %s de la cola",nombre);

    }break;
case 3:
    if(colavacia(&micola))
        printf("Laa cola esta vacia");
    else{
        printf("El frente de la cola es :");
        mostrarfrente(&micola);

    }break;
case 4:
    clrscr();
    mostrarcola(&micola);
    }break;

    case 5:
    printf("HASTA LUEGO");
    break;
    getch();

}while(opcion != 5);



return 0;
}
void crearcola(cola*micola){
micola -> frente =0 ;
micola ->fin=1;

}
int colavacia(cola*micola){
if(micola->fin <micola->frente)
    return 1;
return 0;

}
int colallena(cola*micola){
if(micola->fin == MAXCOLA-1)
    return 1;
return 0;


}
void push(cola*micola,char nombre[]){
micola->fin++;
strcpy(micola->nombre[micola -> fin],nombre);



}
char *pop(cola*micola){
char auxilaiir[50];
strcpy(auxiliar,micola->nombre[micola->frente]);
micola ->frente++;
return auxiliar;

}
void mostrarfrente(cola*micola){
printf("%s",micola->nombre[micola->frente]);

}
void imprimircola(cola*micola){
cola colaux;
char auxiliar[50];

colaux =*micola;
if(colavacia(&colaux))
    printf("Cola vacia.");
else{
    printf("Cola -> ");
    do{
    strcpy(auxiliar,pop(&colaux));
    printf("%s ->",auxiliar);
    }while(!colavacia(&colaux));
}
printf("FIN");

}
