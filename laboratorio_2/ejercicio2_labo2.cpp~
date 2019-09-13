#include <iostream>
#include <stdlib.h>

using namespace std;

void raiz(int,float ,float*);

int main()
{
    int n;
    float *p=NULL;
    float r0=1;
    p=&r0;

    cout<< "Ingrese numero a calcular raiz cuadrada: \n"<<endl;
    cin>>n;cout<<"\n";

    raiz(n,r0,p);
    cout<<"La raiz cuadrada de: "<<n<<" es "<<r0<<endl;

    return 0;
}

void raiz(int n, float r0,float *p){
float valor=0;
float r1=0;
float rn=0;

r1=((n/r0)+r0)/2;
valor=r0-r1;

    if (r0<0.00001){
        r0=r0;
    }
    if(valor<0.00001){
        //cout<< "La raiz cuadrada de: "<<n<<" es "<<r1<<endl;
        *p=r1;
    }
    if (valor !=0){
        rn=r1;
        raiz( n, rn, p);
    }
}

