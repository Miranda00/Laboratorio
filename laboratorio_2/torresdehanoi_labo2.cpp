#include <iostream>
using namespace std;

void jugadas(int, int, int, int);

int main (){

int torre1=1,torre2=2,torre3=3;
int discos=0;

cout<<"Con cuantos discos quiere jugar?\n"<<endl;
cin>>discos;
jugadas(discos,torre1,torre2,torre3);

return 0;
}
void jugadas(int discos, int torre1, int torre2, int torre3){
if (discos==1){
    cout<<"Mover disco de la torre "<< torre1 <<" hacia la torre 
"<<torre3<<".\n"<<endl;
}
else{
    jugadas(discos-1,torre1,torre3,torre2);
    cout<<"Mover disco de la torre "<< torre1 <<" hacia la torre 
"<<torre3<<".\n"<<endl;
    jugadas(discos-1,torre2,torre1,torre3);
}

}

