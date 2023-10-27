#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main (){
	
	int chute_usuario;
	
	
	srand(time(0));
	int numero_sorteado = (rand() % 100) + 1;
	
	
	while(chute_usuario != numero_sorteado){
		cout << "Adivinhe o numero que sera sorteado: ";
	    cin >> chute_usuario;
	 if (chute_usuario < numero_sorteado){
		cout << "O seu palpite foi menor que o numero do sorteio \n";
	} else if (chute_usuario > numero_sorteado){
		cout << "O seu palpite foi maior que o numero do sorteio \n";
	} else {
		cout << "Voce acertou o numero!!!!!!!";
	}
	}
	  
	
	
	
	
	
	
	
	
}
