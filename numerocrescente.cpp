#include <iostream>
using namespace std;

int main () 
{
	int escolha1, escolha2, par, impar, numero;
	
	cout << "1 - Par";
	cout << "2- Impar";
	
	
	
	cout << "Jogador 1, digite um numero: ";
	cin >> numero1;
	
	cout << "Jogador 2, digite um numero: ";
	cin >> numero2;
	
	if (numero1 %1)
	{
		numero1 = par;
	}
	
	else{
		numero1 = impar;
	}
	
	if (numero1 + numero2 %1){
		cout << "Jogador 2 venceu.";
	}
		
}








	
}
