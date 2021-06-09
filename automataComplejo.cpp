#include <iostream>
using namespace std;

void informacion();

int main(){
	string cadena;
	string estado;
	int band;
	int opc;
	
	do{
		informacion();
		estado = "q0";
		band = 0;
		
		cout<<"\tAlfabeto = {1,0}"<<endl;
		cout<<"Ingresa una cadena usando el alfabeto dado: ";
		cin>>cadena;
		
		cout<<"\nEstado inicial: "<<estado<<endl<<endl;
		//Se crea un ciclo para recorrer cada valor de la cadena ingresada por el usuario
		for(int i=0;i<cadena.size();i++){
			//Se crea un menú para ir colocando el estado al valor que le corresponda para mostrarlo en pantalla
			switch(band){
				case 0:
					if(cadena[i] == '0'){
						estado = "q2";
						band = 2;
					}else{
						estado = "q1";
						band = 1;
					}
					break;
				case 1:
					if(cadena[i] == '0'){
						estado = "q3";
						band = 3;
					}else{
						estado = "q0";
						band = 0;
					}
					break;
				case 2:
					if(cadena[i] == '0'){
						estado = "q0";
						band = 0;
					}else{
						estado = "q3";
						band = 3;
					}
					break;
				case 3:
					if(cadena[i] == '0'){
						estado = "q1";
						band = 1;
					}else{
						estado = "q2";
						band = 2;
					}
			}
			cout<<"Valor: "<<cadena[i]<<"\nEstado: "<<estado<<endl<<endl;
		}
		//Se hace una comparación para determinar si la cadena analizada es válida, o no, dentro del sistema
		if(band == 0){
			cout<<"La cadena "<<cadena<<" es v"<<char(160)<<"lida."<<endl<<endl;
		}else{
			cout<<"La cadena "<<cadena<<" no es v"<<char(160)<<"lida."<<endl<<endl;
		}
		
		cout<<"Para finalizar ingresa ""99"" sino cualquier otro numero: ";
		cin>>opc;
		system("cls");
	}while(opc != 99);
	
	cout<<endl<<"H A S T A   P R O N T O . . ."<<endl<<endl;
	
	return 0;
}
//Función hecha exclusivamente como uso para la información del programa
void informacion(){
	cout<<endl<<"\t\t	* AUT"<<char(224)<<"MATA DE ESTADO FINITO - COMPLEJO *"<<endl<<endl;
	cout<<" Programa que analiza cadenas de valores dados por el usuario y determina si son aceptados en el sistema."<<endl;
	cout<<" Se pedrir"<<char(160)<<" al usuario que ingrese una cadena usando los valores del alfabeto y verificar"<<char(160)<<" cada valor."<<endl;
	cout<<" El estado inicial ser"<<char(160)<<" q0, con cada valor analizado, pasar"<<char(160)<<" de un estado a otro, mostrandolo en pantalla."<<endl;
	cout<<" El estado de aceptaci"<<char(162)<<"n ser"<<char(160)<<" q0, en caso de que finalice en dicho estado, la cadena ingresada ser"<<char(160)<<" v"<<char(160)<<"lida."<<endl;
	cout<<" En caso contrario que termine en cualquier otro estado, la cadena ingresada no ser"<<char(160)<<" v"<<char(160)<<"lida en el sistema."<<endl<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl<<endl;
}
