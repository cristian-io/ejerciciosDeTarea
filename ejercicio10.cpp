#include <iostream>
using namespace std;
int main() {
  int numero=0;
  float notas[numero];
  float respaldo[numero];
  float definitiva=0;
  char meteria[20];
  cout<<"ingrese el nombre de la materia ";
  cin>>meteria; 
  cout<<"ingresa cuantas notas deseas ingresar";
  cin>>numero;  
  for(int i=0;i<numero;i++){
    cout<<"ingrese la nota";
    cin>>notas[i];
    respaldo[i]=notas[i];
  }  
  cout<<"\n";
  cout<<"se  ingresaron  estas notas \n";
  for(int i=0;i<numero;i++){
    cout<<respaldo[i];
    cout<<"\n";
  }
  
  
  for(int i=0;i<numero;i++){
  	definitiva=definitiva+notas[i];
  }
  definitiva=definitiva*0.20;
  cout<<"la definitiva de la tercera nota es de : "<<definitiva;
  
  
  
  return 0;
  
    
  
}


