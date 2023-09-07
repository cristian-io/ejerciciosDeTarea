#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
  int anos;
  string texto;  
  cout << "ingrese su edad\n ";
  cin>>anos;
  texto=(anos>=18)?"usted es mayor de edad":"usted es menor de edad";
  cout<<texto<<"\n";
  return 0;
}

