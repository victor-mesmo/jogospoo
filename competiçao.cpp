// competi�ao 

#include <iostream> // acessando as bibliotecas
#include <string>
#include <ctime>
//para usar os recursos de entrada e sa�da da bibliotecas
using namespace std;
// void fun�ao do progrma
//Fun�oes sao usadas para criar pequenos peda�os de c�digos separados do programa principal
void imprimir_espacos(int total);
//int argc, char* args "Eles s�o �teis caso o programa necessite que o usu�rio passe argumento(s) ao chamar-lo pelo console (Prompt no Windows)."
// fun��o principal do programa "int main".
int main(int argc, char* args[])
{
	bool sair = false; // bool palavra-chave pode ter valores true e false.
	string mot1; // variavel motorista 1
	string mot2; // variavel motorista 1
	int rodada = 0, rodada2 = 0; // variavel inteira com os valores 0
	int total_espacos = 10; // variavel inteira com os valores 1


	cout << "Digite o nome do piloto 1:" << endl; // saida 
	cin >> mot1; // entrada que ta salvando na variavel 
	cout << "Digite o nome do piloto 2:" << endl; // saida 
	cin >> mot2; // entrada que ta salvando na variavel 

	// while- la�o e usado quando nao sabemos quantas vezes vamos repetir os la�o ou quando vamos parar
	while (sair == false)// sair == false, retomando a bool para dizer quando queremos sair do la�o
	{

		srand((int)time(0)); //A fun��o rand() gera uma sequ�ncia de valores que se repete igual a si pr�pria sempre que o programa � executado.
		total_espacos = rand() % 3 + 1; // gera um numero aleatorio no caso entre 1 e 100
		rodada = rodada + total_espacos; // a rodada vai ser somada com o total_espacos que vai substituir o numero de rodadas anterior 
		
		// nas linha de baixo vai imprimir os carrinhos o nomes deles tambem 
		cout << "LARGADA                                                                      LINHA DE CHAGADA" << endl;
		cout << "piloto " << mot1 << endl;
		imprimir_espacos(rodada); // vai imprimir a quantidade de espa�os 
		cout << "   _  " << endl;
		imprimir_espacos(rodada);// vai imprimir a quantidade de espa�os  deixando o carro com o teto 
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
		
		// mesma coisa do de cima 
		srand((int)time(0));
		total_espacos = rand() % 3 + 1;
		rodada2 = rodada2 + total_espacos;
		
		cout << "LARGADA                                                                      LINHA DE CHAGADA" << endl;
		cout << "piloto " << mot2 << endl;
		imprimir_espacos(rodada2);
		cout << "   _  " << endl;
		imprimir_espacos(rodada2);
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

		cout << "proxima jogada ? (Digite enter)" << endl; // comando para proxima jogada 
		

		system("pause");// vai deixar o programa pausado ate que alguem aperte alguma tecla
		
		system("cls"); // vai limpar a tela 
		


		if (rodada >= 20 || rodada2 >= 20) // se os carrinhos chegarem na rodada 20 eles vao parar 
		{
			sair = true; // // comando buleano
		}
		else //mas se nao...
		
			system("cls"); // limpa a tela 
		

	
	}
	
	if (rodada = 20)  // se o jagador chagar a 20 ele ganha
		cout << mot1 << "ganho o primeiro lugar" << endl;
	
	else if (rodada2 = 20) // mesma coisa 
		cout << mot2 << "ganho o primeiro lugar" << endl;
	
	else // se nao empate
		cout << "EMPARE" << endl; // se nao empate 
	
	
	system("pause"); // pausar 

	return 0; // retorno 0
}

void imprimir_espacos(int total) // fun�ao 
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++) // la�o for com uma variavel qntd_atual

	{
		cout << " ";
	}
}