struct pilas{
int valor;
pilas *direcciona;


};
pilas *pilao,*pilaaux;
void ingreso();

int main(){
int opcion;
while(true){
cout<<"1 Ingreso de datos a la pila"<<endl;
cout<<"2 Leer datos de  la pila"<<endl;
cout<<"3 Extraer datos  la pila"<<endl;

cin>>opcion;
switch(opcion){
case 1:
ingreso();
}


}
void ingreso(){
if(pilao==NULL){

    pialo=new (pilas);
    cout<<"Ingrese primer dato"<<endl;
    cin>>pilao->valor;
    pilao->direcciona=NULL;
    return;
}

}
}
