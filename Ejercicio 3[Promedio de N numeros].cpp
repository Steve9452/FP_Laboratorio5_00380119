#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	float nx,n,n1=0,n2,n3,promedio;
	cout<<"Ingrese la cantidad de numeros a promediar: ";cin>>nx;
	n2=nx;
	cout<<"Ingrese los datos:"<<endl;
	for(n3=1;n3<=nx;n3++){
	cout<<n3<<"=";//Contador
	cin>>n;
	n1+=n;
}
promedio=n1/n2;
//cout<<n1<<endl;
cout<<"El promedio de ["<<nx<<"] numeros es: "<<promedio;
getch();

	return 0;
}
