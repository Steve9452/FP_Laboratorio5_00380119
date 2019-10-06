#include <iostream>
using namespace std;
/*Funciones individuales */
int suma(int ns1, int ns2);
int resta(int nr1, int nr2);
float multi(float nm1, float nm2);
float divi(float nd1, float nd2);

/*FUNCION PRINCIPAL*/
int main(){
	int opcion,resultadosuma,resultadoresta,fibor,n,i,f=0,g=1,h,factorial=1;;
	float n1,n2,resultadodivi,resultadomulti;	
	do{
		cout<<"________________________________"<<endl<<"*****INGRESE UNA OPCION*********|"<<endl<<"1-Suma de dos numeros.          |"<<endl<<"2-Resta de dos numeros.         |"<<endl<<"3-Multiplicacion de dos numeros.|"<<endl<<"4-Division de dos numeros.      |"<<endl<<"5-Fibonacci de un numero.       |"<<endl<<"6-Factorial de un numero.       |"<<endl<<"7-Salir.                        |"<<endl<<"________________________________|"<<endl<<endl<<"OPCION: ";
	cin>>opcion;cout<<endl;
	switch(opcion){
		case 1: 
		cout<<"**SUMA DE DOS NUMEROS**"<<endl<<"Ingrese dos numeros: ";
		cin>>n1>>n2;
		resultadosuma= suma(n1,n2);
		cout<<"Resultado: ["<<resultadosuma<<"]"<<endl;
				opcion=0;break;
		case 2: 
		cout<<"**RESTA DE DOS NUMEROS**"<<endl<<"Ingrese dos numeros: ";
		cin>>n1>>n2;
		resultadoresta= resta(n1,n2);
		cout<<"Resultado: ["<<resultadoresta<<"]"<<endl;
	        	opcion=0;break;
		case 3: 
		cout<<"**MULTIPLICACION DE DOS NUMEROS**"<<endl<<"Ingrese dos numeros: ";
		cin>>n1>>n2;
		resultadomulti= multi(n1,n2);
		cout<<"Resultado: ["<<resultadomulti<<"]"<<endl;
		        opcion=0;break;
		case 4: 
		cout<<"**DIVISION DE DOS NUMEROS**"<<endl<<"Ingrese dos numeros: ";
		cin>>n1>>n2;
		resultadodivi= divi(n1,n2);
		cout<<"Resultado: ["<<resultadodivi<<"]"<<endl;
		        opcion=0;break;
		case 5: 
	     cout<<"***FIBONACCI***"<<endl<<"Ingrese un numero: "<<endl;cin>>n;
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
            h=0;n=0;f=0;g=1;
	        opcion=0;
			break;
		case 6:
				
        cout<<"*****CALCULADORA DE FACTORIAL*****"<<endl<<"Ingrese un numero: ";cin>>i;
	    for(i;i>=1;i--)//i va restando de uno en uno
	    {
	    //valor
	    factorial*=i;//factorial es igual al producto de cada i en el ciclo
		
		
	    }
	    cout<<"Resultado : ["<<factorial<<"]"<<endl;
	

		factorial=1;
		opcion=0;
		break;
		case 7: break;
		default: cout<<"[Ingrese una opcion valida]: "<<endl;opcion=0;break	;
	}
    }while(opcion==0);
	/*PRUEBA DE FUNCIONES
	int resultadosuma,resultadoresta;
	float n1,n2,resultadodivi,resultadomulti;
	cin>>n1>>n2;
  resultadosuma= suma(n1,n2);
  resultadoresta= resta(n1,n2);
  resultadomulti= multi(n1,n2);
  resultadodivi= divi(n1,n2);
	cout<<resultadosuma<<endl<<resultadoresta<<endl<<resultadomulti<<endl<<resultadodivi<<endl;*/
	return 0;
}
/*DEFINICION DE FUNCIONES*/
int suma(int ns1, int ns2){//Funcion suma
	int sumaR;
    sumaR=ns1+ns2;
   return sumaR;
}
int resta(int nr1, int nr2){//Funcion resta
	int restaR;
	restaR=nr1-nr2;
	return restaR;
}
float multi(float nm1, float nm2){
	int multiR;
	multiR=nm1*nm2;
	return multiR;	
}
float divi(float nd1, float nd2 ){
	float diviR;
	diviR=nd1/nd2;
	return diviR;
}


	



