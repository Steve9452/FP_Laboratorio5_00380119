#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int i,factorial=1;
cout<<"*****CALCULADORA DE FACTORIAL*****"<<endl<<"Ingrese un numero: ";cin>>i;
	for(i;i>=1;i--)//i va restando de uno en uno
	{
	//valor
	factorial*=i;//factorial es igual al producto de cada i en el ciclo
		
		
	}
	cout<<"Resultado : "<<factorial<<endl;
	getch();
	
	return 0;
}
