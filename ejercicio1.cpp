#include <iostream>

using namespace std;

int main(){
	int numeros[100],m;
	
	cout<<"Ingrese el numero de elementos del arreglo: "<<endl;
	cin>>m;
	
	for(int i=0;i<m;i++){
		cout<<"Ingrese un numero: ";cin>>numeros[i];
	}
	cout<<"tu arreglo es :"<<endl;
	for(int i=0;i<m;i++){
		cout<<numeros[i]<<endl;
	}
	
	return 0;
}