#include <iostream>
#include <cstdlib>

using namespace std;

int Ackerman(int m, int n)
{
    if(m==0)
      return n+1;
    else
    {
        if(n==0)
           return Ackerman(m-1, 1);
        else
           return Ackerman(m-1, Ackerman(m, n-1));
    }
}
int main()
{
    int m, n, num ;

    cout<<"\n         FUNCION DE ACKERMAN \n\n";

    cout<<"Ingrese <m>: ";
    cin>> m ;
    cout<<"Ingrese <n>: ";
    cin>> n ;

    num = Ackerman(m,n);

    cout<<"\nEl numero es: "<< num <<endl<<endl;

    system("pause");

    return 0;
}
