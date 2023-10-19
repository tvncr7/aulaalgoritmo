#include <iostream>
using namespace std;

int main (){
	
	bool x;
	x = true;
	
	while (x){
	  int nota;
	  cout << "Digite uma nota entre 0 e 10 \n";
	  cin >> nota;
		
	if (nota >= 0 && nota <=10){
		
		x = false;
		cout << "Numero valido!";
	}
	else {
		cout << "Numero invalido! \n";
	}
		
	}
	
	
	

	
	
	
	
	
}
