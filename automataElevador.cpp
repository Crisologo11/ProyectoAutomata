#include <iostream>
using namespace std;

void informacion();

int main(){
	string estado = "DETENIDO";			//Declaración de la variable estado, inicializada como detenido, ya que es su estado inicial
	int pisoActual = 0;
	int pisoNuevo = 0;
	int band = 0;
	
	informacion();
	
	cout<<"\tEstado: "<<estado<<"\n\tPiso Actual: "<<pisoActual<<endl;
	
	do{
		//Se crea un menú para determinar el proceso que realizará el ascensor, por default se inicia en 0 ya que es su estado inicial (DETENIDO)
		switch(band){
			case 0:
				cout<<endl<<"Ingresa el piso al que deseas ir: ";
				cin>>pisoNuevo;
				if(pisoNuevo == 99){
					break;
				}else{
					if(pisoNuevo == pisoActual){
						estado = "DETENIDO";
						band = 0;
					}else{
						if(pisoNuevo > pisoActual){
							estado = "SUBIENDO";
							band = 1;
						}else{
							estado = "BAJANDO";
							band = -1;
						}
					}
				}
				
				break;
			case 1:
				pisoActual = pisoNuevo;
				if(pisoNuevo == pisoActual){
					estado = "DETENIDO";
					band = 0;
				}
				cout<<endl<<"\t.\n\t.\n\t."<<endl;
				break;
			case -1:
				pisoActual = pisoNuevo;
				if(pisoNuevo == pisoActual){
					estado = "DETENIDO";
					band = 0;
				}
				cout<<endl<<"\t.\n\t.\n\t."<<endl;
		}
		cout<<"\n\tEstado: "<<estado<<"\n\tPiso Actual: "<<pisoActual<<endl;
	}while(pisoNuevo != 99);
	
	cout<<endl<<"H A S T A   P R O N T O . . ."<<endl<<endl;
	
	return 0;
}
//Función hecha exclusivamente como uso para la información del programa
void informacion(){
	cout<<endl<<"\t\t\t* AUT"<<char(224)<<"MATA DE ESTADO FINITO - ASCENSOR *"<<endl<<endl;
	cout<<" Programa que simula el funcionamiento de un elevador, usando como base un sistema aut"<<char(162)<<"mata."<<endl;
	cout<<" El estado inicial y final (aceptaci"<<char(162)<<"n) ser"<<char(160)<<" ""DETENIDO"", se podr"<<char(160)<<" ingresar el piso al que se desea ir."<<endl;
	cout<<" Dicho piso elegido har"<<char(160)<<" que el estado se modifique a ""SUBIENDO"" o ""BAJANDO"", seg"<<char(163)<<"n sea el caso."<<endl;
	cout<<"\tPara salir del sistema, ingresa un ""99""."<<endl<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl<<endl;
}
