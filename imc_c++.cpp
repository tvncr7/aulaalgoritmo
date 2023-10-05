#include <iostream>
using namespace std;

int main () {
	
	float peso, altura;
	float imc;
	
	cout << "Informe o peso em KG: ";
	cin >> peso;
	
	cout << "Informe a altura em metros: ";
	cin >> altura;
	
	imc = peso / (altura * altura);
	cout <<"Seu IMC e de: " << imc;
	cout << "\n";
	
	if( imc < 18.5) {
		cout << "Você está abaixo do peso";
	} else {
		if (imc >= 18.5 && imc <25) {
			cout << "Peso ideal";
		} else {
			if (imc >=25 && imc <30) {
				cout << "Levemente acima do peso";
			} else {
				if (imc >=30 && imc <35) {
					cout << "Obesidade I";
				} else {
					if (imc >= 35 && imc <40) {
						cout << "Obesidade II";
					} else {
						cout << "Obesidade III";
					}
				}
			}
		}
	}
}

