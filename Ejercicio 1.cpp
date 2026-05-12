#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int nivel;
    int exp;
    string resultado;
    
    cout<<"Bienvenido, porfavor eliga su nivel de estudio"<<endl;
    
    cout<<"Escriba el número de su nivel correspondiente a continuación:"<<endl;
    cout<<"1. Primaria"<<endl;
    cout<<"2. Secundaria"<<endl;
    cout<<"3. Universitario"<<endl;
    
    cin>>nivel;
    
    cout<<"Ahora ingrese sus años de experiencia"<<endl;
    
    cin>>exp;
    
    //Caso 1: Universitario+5 años: (exp>=5&&nivel==3)
    //Caso 2: Secundaria+3 a 5 años: (exp>=3&&exp<=5&&nivel==2)
    //Caso 3: Menos de 3 años: (exp<3)
    
    resultado=(exp>=5&&nivel==3)?"Aprobado":(exp>=3&&exp<=5&&nivel==2)?"Aprobado":(exp<3)?"Rechazado":"Sin requisitos";
    
    cout<<"Su Resultado: "<<resultado<<endl;
    
    return 0;
}
