// competiçao 

#include <iostream> // acessando as bibliotecas
#include <string>
#include <ctime>
//para usar os recursos de entrada e saída da bibliotecas
using namespace std;
// void funçao do progrma
//Funçoes sao usadas para criar pequenos pedaços de códigos separados do programa principal
void imprimir_espacos(int total);
//int argc, char* args "Eles são úteis caso o programa necessite que o usuário passe argumento(s) ao chamar-lo pelo console (Prompt no Windows)."
// função principal do programa "int main".
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

	// while- laço e usado quando nao sabemos quantas vezes vamos repetir os laço ou quando vamos parar
	while (sair == false)// sair == false, retomando a bool para dizer quando queremos sair do laço
	{

		srand((int)time(0)); //A função rand() gera uma sequência de valores que se repete igual a si própria sempre que o programa é executado.
		total_espacos = rand() % 3 + 1; // gera um numero aleatorio no caso entre 1 e 100
		rodada = rodada + total_espacos; // a rodada vai ser somada com o total_espacos que vai substituir o numero de rodadas anterior 
		
		// nas linha de baixo vai imprimir os carrinhos o nomes deles tambem 
		cout << "LARGADA                                                                      LINHA DE CHAGADA" << endl;
		cout << "piloto " << mot1 << endl;
		imprimir_espacos(rodada); // vai imprimir a quantidade de espaços 
		cout << "   _  " << endl;
		imprimir_espacos(rodada);// vai imprimir a quantidade de espaços  deixando o carro com o teto 
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

void imprimir_espacos(int total) // funçao 
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++) // laço for com uma variavel qntd_atual

	{
		cout << " ";
	}
}