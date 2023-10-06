#include <iostream>
#include <string>
using namespace std;



int main (){
	
	int contador, soma, valor_digitado;
	
	soma = 0;
	
	cout << "Deseja somar quantos numeros? \n";
	cin >> contador;
	
	for (int i = 1; i <= contador; i++){
		cout << "Digite o numero a ser somado: ";
		cin >> valor_digitado;
		soma = soma + valor_digitado;
		
		
		 
	} 
	
		cout << "A soma e de : " << soma;


	}
	
	
	
	
	
	

