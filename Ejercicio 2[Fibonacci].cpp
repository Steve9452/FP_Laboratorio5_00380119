//Serie de fibonacci
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int n,i,f=0,g=1,h;
	cout<<"FIBONACCI"<<endl<<"Ingrese un numero: "<<endl;cin>>n;
	cout<<"Resultado: "<<endl;
	if(n==0){
		cout<<f;
	}
	else{
		
	n-=1;
    cout<<f<<endl<<g<<endl;
for(i=1;i<=n;i++){//Este codigo se ejecutara n veces
	//cout<<i<<"-"; //Contador 
	h=f+g;
	f=g;
	g=h;
	
	cout<<h<<endl;
}
}
	getch();
	
	return 0;
}
