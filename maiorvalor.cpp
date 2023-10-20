#include <iostream>
using namespace std;


int main (){
	
	int numero, maior_valor;
	maior_valor = 0;
		
	for (int i = 1; i <= 5; i++){
		cout << "Informe um numero: ";
		cin >> numero;
		
		if (numero >= maior_valor){
			maior_valor = numero;
			
		}
		
	}
	cout << "O maior valor e: " << maior_valor;
}
