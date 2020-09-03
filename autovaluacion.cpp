#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


bool validar();


string password ="contrasena";

int main()
{   
    cout<<"INICIO DE SESION"<<endl<<"Introducir contrasena:\n";

    if (validar())
    {
        cout<<"Exito";
    }
    else{
        cout<<"Acceso denegado"<<endl<<"Fin del programa";
    }
    getch();
    return 0;
}

bool validar()
    {
    string inPassword;
    for (int i=1;i<=3;i++)
    {
        cin>>inPassword;
        if (password==inPassword)
        {       
            return true;
        }
        if(i!=3){
            cout<<"Intente nuevamente:\n";
        }
    }
    return false;
}