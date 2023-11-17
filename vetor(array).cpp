#include <iostream>
#include <string>

using namespace std;


int main(){
	
	int quantidade_de_vezes;
	int ordem_decrescente;
	
	
	cout << "Quantos numeros quer inserir?";
	cin >> quantidade_de_vezes;
	int numeros[quantidade_de_vezes];
	
	
	for (int i=1; i <= quantidade_de_vezes; i++)
	{
		cout << "Informe o " << i << "numero\n";
		cin >> numeros[i-1];
	}
	
	cout << "A ordem decrescente e: \n";
	
	for (int i=1; i <= quantidade_de_vezes; i++)
	{
		int indice = quantidade_de_vezes - i;
		ordem_decrescente = numeros[indice];
		cout << indice << " - " << ordem_decrescente << "\n";
	}
	
	
}
