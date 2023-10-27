#include <iostream>
#include <string>

using namespace std;

int main (){
	
	int lado1, lado2, lado3;
	
	cout << "Informe as 3 medidas do triangulo\n";
	cin >> lado1;
	cin >> lado2;
	cin >> lado3;
	
	
	if (lado1 == lado2 && lado1 == lado3){
	   cout << "E um triangulo equilatero, possui os 3 lados iguais!";
	
	}
	else if  (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
		  {
			cout << "E um triangulo isosceles, possui 2 lados iguais!";
		  }  
			
		 
		else {
			cout << "E um trianglo escaleno, possui 3 lados diferentes!";
		}
	
		
	
}
