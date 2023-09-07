#include <iostream>
using namespace std;
int main() {
  
  float nota1=0, nota2=0, notaFinal=0,nota3=0, definitiva=0;
 
  cout<<"ingrese la nota del primer previo\n";
  cin>>nota1;
  nota1=nota1*0.25;
  cout<<"ingrese la nota del segundo previo\n";
  cin>>nota2;
  nota2=nota2*0.25;
  cout<<"ingrese la nota tercera nota\n";
  cin>>nota3;
  nota3=nota3*0.20;
  cout<<"ingrese la nota del  previo final \n";
  cin>>notaFinal;
  notaFinal=notaFinal*0.30;
  definitiva=nota1+nota2+nota3+notaFinal;
  
  
  cout<<"la definitiva es de "<<definitiva<<"\n";
  return 0;
}



