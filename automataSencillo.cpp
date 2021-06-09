#include <iostream>
using namespace std;

void informacion();

int main(){
	string cadenas[8] = {"1111","0000","1010","0101","1100","0011","1001","0110"};	//Se declara un arreglo de cadenas para analizarlas posteriormente
	string estado;
	int band;
	//Se crea un ciclo para recorrer cada cadena del arreglo
	for(int i=0;i<8;i++){
		informacion();
		estado = "q0";
		band = 0;
		cout<<"Cadena: "<<cadenas[i]<<"\nEstado inicial: "<<estado<<endl<<endl;
		//Se crea un ciclo para recorrer cada valor de la cadena elegida previamente
		for(int j=0;j<4;j++){
			//Se crea un menú para ir colocando el estado al valor que le corresponda para mostrarlo en pantalla
			switch(band){
				case 0:
					if(cadenas[i][j] == '0'){
						estado = "q2";
						band = 2;
					}else{
						estado = "q0";
						band = 0;
					}
					break;
				case 1:
					if(cadenas[i][j] == '0'){
						estado = "q1";
						band = 1;
					}else{
						estado = "q1";
						band = 1;
					}
					break;
				case 2:
					if(cadenas[i][j] == '0'){
						estado = "q2";
						band = 2;
					}else{
						estado = "q1";
						band = 1;
					}
			}
			cout<<"Valor: "<<cadenas[i][j]<<"\nEstado: "<<estado<<endl<<endl;
			
		}
		//Se hace una comparación para determinar si la cadena analizada es válida, o no, dentro del sistema
		if(band == 1){
			cout<<"La cadena "<<cadenas[i]<<" es v"<<char(160)<<"lida."<<endl<<endl;
		}else{
			cout<<"La cadena "<<cadenas[i]<<" no es v"<<char(160)<<"lida."<<endl<<endl;
		}
		system("pause");
		system("cls");
	}
	
	
	return 0;
}
//Función hecha exclusivamente como uso para la información del programa
void informacion(){
	cout<<endl<<"\t\t	* AUT"<<char(224)<<"MATA DE ESTADO FINITO - SENCILLO *"<<endl<<endl;
	cout<<" Programa que analiza cadenas de valores preestablecidos y determina si son aceptados en el sistema."<<endl;
	cout<<" Se mostrar"<<char(160)<<" cada una de las cadenas establecidas y el estado en el que se encuentran actualmente."<<endl;
	cout<<" Seguir"<<char(160)<<" as"<<char(161)<<" hasta llegar a su estado final y entonces poder demostrar si es una cadena v"<<char(160)<<"lida o no."<<endl<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl<<endl;
}
