#include <stdio.h>
 typedef struct{
 struct elemento* siguiente;
 char* nombre;



 }elemento;
 elemento* ultimo= NULL;
 void agregar(elemento* _elemento){
     _elemento->siguiente =NULL;
 if(ultimo==NULL){
ultimo = _elemento
 }


 else{
 _elemento -> siguiente =ultimo;



  }

 }

 elemento* extraer(){
 if(ultimo == NULL){
    return NULL;

    }
    elemento* elemento_retorno=ultimo;
    ultimo = elemento_retorno -> siguiente;
    return elemento_retorno;
 }


 int main(){
 elemento* uno =malloc(sizeof(elemento));
 elemento* dos =malloc(sizeof(elemento));
 elemento* tres =malloc(sizeof(elemento));
 elemento* cuatro =malloc(sizeof(elemento));

 uno -> nombre ="RICARDO MONTANO ARCEO";
 dos -> nombre = "ALEJANDRO NOVOA";
 tres -> nombre ="PEDRO ISLAS";
 cuatro -> nombre ="OLAF MENDOZA";
  agregar(uno);
  agregar(dos);
  agregar(tres);
  agregar(cuatro);

  elemento* i = extraer();
  while(i 1= NULL){
    printf("%s\n", i -> nombre);
    i= extraer();

  }


 return 0;
 }
