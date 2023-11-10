#include <iostream>
#include <string>

using namespace std;

int main ()
{
	
	
	
	
	
	
	
	float blindex, persiana, aluminio, espelho, largura_blindex, altura_blindex, largura_persiana, altura_persiana, orc_persiana, largura_porta, altura_porta, orc_porta, 
	largura_espelho, altura_espelho, orc_espelho;
	int escolha_usuario;
	int fume, incolor, verde, tipo_vidro;
	
	
	while (true)
	{
	
		cout << "\nBem vindo a Vidracaria Gigliotti \n";
		cout << "Escolha o servico desejado para saber o orcamento: \n";
		
		cout << "(1) - Blindex \n";
		cout << "(2) - Persianas \n";
		cout << "(3) - Portas de Aluminio \n";
		cout << "(4) - Espelhos \n";
		cout << "(5) - Sair do setor de orcamento\n";
		cin >> escolha_usuario;
		
		
		fume = 300;
		incolor = 200;
		verde = 350;
		persiana = 130;
		aluminio = 320;
		espelho = 380;
		
		
		if (escolha_usuario == 1)
		{
			cout << "Voce escolheu Blindex \n";
			cout << "Digite as medidas a seguir em metros \n";
			
			cout << "Largura: ";
			cin >> largura_blindex;
			
			cout << "Altura: ";
			cin >> altura_blindex;
			
			cout << "Qual a cor do vidro? \n";
			cout << "(1)Fume -";
			cout << "(2) Incolor -";
			cout << "(3)Verde \n" ;
			cin >> tipo_vidro;
			
			if (tipo_vidro == 1)
			{
				blindex = (largura_blindex * altura_blindex) * fume;
				cout << "Seu orcamento ficara no valor de:R$" << blindex <<"\n";
			}
			
			else if (tipo_vidro ==2)
			{
				blindex = (largura_blindex * altura_blindex) * incolor;
				cout << "Seu orcamento ficara no valor de:R$" << blindex <<"\n";
			} 
			else
			{
				blindex = (largura_blindex * altura_blindex) * verde;
				cout << "Seu orcamento ficara no valor de:R$" << verde <<"\n";
			}
		}
			  
		else if (escolha_usuario == 2)
		{
			cout << "Voce escolheu Persianas;";
			cout << "\nDigite as medidas a seguir em metros";
			
			cout << "\nLargura: ";
			cin >> largura_persiana;
			
			cout << "Altura: ";
			cin >> altura_persiana;
			
			orc_persiana = (largura_persiana * altura_persiana) * persiana;
			cout << "Seu orçamento ficara no valor de: R$ " << orc_persiana <<"\n";
			
		}
		
		else if (escolha_usuario ==3)
		{
			cout << "Voce escolheu Portas de aluminio.";
			cout << "\n Digite as medidas abaixo em metros";
			
			cout << "\nLargura: ";
			cin >> largura_porta;
			
			cout << "Altura: ";
			cin >> altura_porta;
			
			orc_porta = (largura_porta * altura_porta) * aluminio;
			cout << "Seu orcamento ficara no valor de: R$" << orc_porta <<"\n" ;
			
		}
		else if (escolha_usuario ==4)
		{
			cout << "Voce escolheu espelhos.";
			cout << "\nDigite as medidas abaixo em metros:";
			
			cout << "\nLargura: ";
			cin >> largura_espelho;
			
			cout << "Altura: ";
			cin >> altura_espelho;
			
			orc_espelho = (largura_espelho * altura_espelho) * espelho;
			cout << "Seu orcamento ficara no valor de: R$ " << orc_espelho <<"\n";
		}
		
		else
		{
			break;
		}
	}
}

