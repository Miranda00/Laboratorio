#include <iostream>

using namespace std;


int main(void) {

    float promeio;
    int notas[10];
    int suma=0;


    for (int i=0; i <10; i++){
    cout<< "Ingrese nota "<< i+1 << endl;
    cin>>notas[i];

    }
    int n = 9;
    int i =0;
    int promedio;
    while ( i<=n){

    suma=suma + notas[i];
    i++;
    }
    promedio=(suma/n);
    cout<<"El promedio es de: "<<promedio<<endl;

    return 0;
}

