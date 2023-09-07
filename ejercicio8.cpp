#include <iostream>
using namespace std;
int main() {
  float temperatura, farenthey ,kelvin;
  char escala[12];
  cout<<"ingrese la temperatura en grados CELCIUS";
  cin>>temperatura;
  cout<<"cual es la escala de temperatura ( farentheit,    kelvin)";
  cin>>escala;  
  if(escala=="farentheit"){
    temperatura=(temperatura-32)*5/9;
  }
  else if ("kelvin"){
    temperatura=temperatura-273.15;
    
  }
  farenthey=(temperatura*9/5)+32;
  kelvin=temperatura+273.15;
  cout<<"temperatura en celcius = "<<temperatura;
  cout<<"temperatura en ffarenthey  = "<<farenthey;
  cout<<"temperatura en kelvin  = "<<kelvin;
      
}
