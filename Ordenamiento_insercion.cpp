#include<iostream>
using namespace std;
void leeCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>n[i];
    }

}

void muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<endl;
    }
}
