#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int ano;
	
	
	cout << "Digite um ano para saber se ele e bissexto: ";
	cin >> ano;
	
	
	if (ano %4 ==0 && ano %100 != 0){
		cout << ano << " e bissexto";
	} else if (ano %400 == 0 && ano %100 ==0){
		cout << ano << " e bissexto";
	}	else {
		cout << ano << " nao e bissexto";
	}
			
	
}
