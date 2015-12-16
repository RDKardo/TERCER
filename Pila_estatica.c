#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct{
int datos[TAM];
int cima;

}pila;


int menu();

void previa [pila-pila];



int insertar[pila *pila, int dato]{
if(llena(*pila)==0){
    pila->cima++;
    pila ->datos[pila->cima]=dato;
    return 1;


}
return 0;



}
int eliminar(pila *pila){
int aux;
if(vacia(*pila)==0){
    aux=pila->datos[pila->cima];
    pila->datos[pila->cima]=0;
    pila->cima--;


}


}
int vacia(pila pila){
if(pila.cima==-1)
    return 1;
return 0;

}

int main(){
int opc,num,i,j;
pila pila;

pila.cima=-1;

previa(pila);
while((opc=menu())!=5){
    switch(opc){
case 1:
    printf(" Numero:");
    scanf("%d",&num);
    if(insertar(&pila,num)==1)
        printf("<<< NUMERO INSERTADO>> \n");
        else
            printf("<<LA PILA ESTA LLENA>> \n");
        break;
case 2:
    num=eliminar(&pila);
    if(num!=0)
        printf("<<ELEMENTO ELIMINADO : %d >> \n",num);
    else
        printf("<< LA PILA ESTA VACIA >> \n");
    break;
case 3:
    j=pila.cima;
    for(i=0<=j;i++){
        num=eliminar(&pila);
        if(num!=0)
            printf("<< ELEMENTO ELIMINDADO: &d >> \n",num);



    }
    break;
case 4:
    if(vacia(pila)==0)
        printf("<< LA CIMA ES  : %d >>",pila.datos[pila.cima]);
    else
        printf("<< LA PILA ESTA VACIA >>");
    break;
    default;
    printf(" << OPCION ERRONEA >>");




    }
previa(pila);


}
return 0;



}
