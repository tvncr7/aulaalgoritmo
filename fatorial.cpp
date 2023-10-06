#include <iostream>
#include <string>

using namespace std;


int main (){
	
	int numero;
	int fatorial;
	
	cout << "Quer sabe o fatorial de qual numero? ";
	cin >> numero;
	
	fatorial = 1;
	
	for (int i = 1; i <= numero; i++)
	{
		fatorial =  fatorial * i;
		cout << fatorial << "\n";
		
	}
	
	cout << fatorial << "\n";
	
	
	
	
}
