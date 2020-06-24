#include <iostream>

using namespace std;


int main(){
 
   int impares[100] = {0};
 
   int contador = 0;
  


  for(int i = 0; contador < 100; i++){
  
      if(i%2 ==1){
     
       impares[contador] += i;
     
       contador++;
     
      }
   
 }

cout<<"el orden desendente  de  numeros impares es:"<<endl;
  
  for(int i = 49; i >= 0; i--){
  
      cout << impares[i] << endl;
  
  }

   
 return 0;

}