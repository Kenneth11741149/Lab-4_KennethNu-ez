#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
#include <cstring>
#include <stdlib.h>
bool validarEnteros(char *orden){
	bool verifier = true;
	for(int i = 0; i < strlen(orden); i++){
		if(isdigit(orden[i])){
		 	
		} else {
		 	verifier = false;
		}
	}
	
	return verifier;
} //FIn enteros

void Ejercicio1(){
	cout << "Ingrese el orden de la matriz" << endl;
	char orden[10];
	int ordenumerico = 0;
	cin >> orden;
	if(validarEnteros(orden)){
		if(orden < 0){
			cout << "No se aceptan numeros negativos" << endl;
		} else {
			ordenumerico = atoi(orden);
			int matrize[ordenumerico][ordenumerico];
			
			for(int i = 0; i < ordenumerico; i++){
				for(int j = 0; j < ordenumerico; j++){
					matrize[i][j] = rand() % 6 + 1;
				}

			}

			for(int i = 0; i < ordenumerico; i++){
				for(int j = 0; j < ordenumerico; j++){
					cout << "["<<matrize[i][j] << "]";
				}
				cout << endl;
			}
			cout << endl;
			cout << "Ingrese el primer numero (Desde 0) " << endl;
			char orden2[10];
			char orden3[10];
			cin >> orden2;
			cout << "Ingrese el segundo  numero (Desde 0): " << endl;
			cin >> orden3;	
			while( validarEnteros(orden2) == false || validarEnteros(orden3) == false || orden2 < 0 || orden3 < 0 ){
			
				cout << "Intente otra vez primer numero (Desde 0) "<< endl;
				cin >> orden2;
				cout << "Intente otra vez segundo numero (Desde 0) " << endl;
				cin >> orden3;
			}
			int neworder = ordenumerico;
			neworder--;
			int ordendos = atoi(orden2);
			int ordentres = atoi(orden3);
			if(ordendos > neworder || ordentres > neworder){
				cout << "Es mayor que el orden de la matriz" << endl;
			} else {
				int cofactor  = 0;
				int matrizee[neworder][neworder];
				int contadoruno = 0;
				int contadordos = 0;
				for(int i = 0; i < ordenumerico;i++){
					for(int j = 0; j < ordenumerico; j++){
						if( i == ordendos &&  j == ordentres){
							cofactor = matrize[i][j];
						}
						if(i == ordendos || j == ordentres ){
							
						} else {
						
						}

					}
					cout << endl;
					
				}
				cout << endl;
				cout << endl;
				if( (ordendos + ordentres) % 2 == 0){
					cout << "+(" << cofactor << ")" << endl;
				} else {
					cout << "-(" << cofactor << ")" << endl;
				}
				for(int i = 0; i < ordenumerico;i++){
					for(int j = 0; j < ordenumerico; j++){
						if(i == ordendos || j == ordentres ){
							
						} else {
							cout << "[" <<  matrize[i][j] << "]";
						}

					}
					cout <<endl;
					cout << "    ";
					
				}				
			}
			

		}





	} else {
		cout << "Invalid Entry, Please try again." << endl;
	}
	
	
}//FIn ejercicio 1

int main(){
	cout << "Bienvenido al Lab de Kenneth" << endl;
	char resp = 'S';
	while(resp == 'S' || resp == 's'){
		int option = 0;
		cout << "       Menu" << endl;
		cout << "1. Ejercicio1" << endl;
		cout << "2. Ejercicio2" << endl;
		cout << "3. Ejercicio3" << endl;
		cin >> option;
		switch(option){
			case 1:
				Ejercicio1();
				break;
			case 2:
				break;
			case 3:
				break;
			default:
				break;
		}

		cout << "Desea volver al menu? [S/N]" << endl;
		cin >> resp;
	}	

	return 0;
}
