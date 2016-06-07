// teste de força... 

// acesando as bibliotecas
#include <iostream>
#include <string>
#include <ctime>
//para usar os recursos de entrada e saída da bibliotecas
using namespace std;
//int argc, char* args "Eles são úteis caso o programa necessite que o usuário passe argumento(s) ao chamar-lo pelo console (Prompt no Windows)."
// função principal do programa "int main".
int main(int argc, char* args[])
{
	// bool palavra-chave pode ter valores true e false.
	bool sair = false;

	string jog1, jog2; // variavel 

	int vida1 = 20, vida2 = 20; // outra variavel de numeros inteiros, a variavel esta salvando o numero 20 das vida1 e vida2
	// saida
	cout << "Digite o nome do jogador 1:" << endl;
	// entrada
	cin >> jog1; // salvando na variavel 

	cout << "Digite o nome do jogador 2:" << endl; // mesma coisa do primeiro 
	cin >> jog2;
	// while- laço e usado quando nao sabemos quantas vezes vamos repetir os laço ou quando vamos parar

	while (sair == false) // sair == false, retomando a bool para dizer quando queremos sair do laço
	{
		cout << " o         o" << endl; // nas linha abaixo vai imprimir os bunecos os nomes dos jogadores 1 e 2 e a vida de ambos.
		cout << ".T./     \\.T." << endl;
		cout << " ^         ^" << endl;
		cout << jog1 << "            "  << jog2 << endl;
		cout << "Vida: " << vida1 << "    " << "Vida: " << vida2 << endl;

		cout << "proxima jogada ? (Digite enter)" << endl; // comando para proxima jogada 
		cin.get(); // proxima linha 
		
		system("pause");// vai deixar o programa pausado ate que alguem aperte alguma tecla

		int dado6;// variavel 
		srand((int)time(0)); //A função rand() gera uma sequência de valores que se repete igual a si própria sempre que o programa é executado.

		dado6 = rand() % 100 + 1; // gera um numero aleatorio no caso entre 1 e 100
		vida1 = vida1 - dado6; // a vida diminui em relaçao ao dado 

		dado6 = rand() % 100 + 1; // mesma coisa 
		vida2 = vida2 - dado6; // mesma coisa

		cout << "vida: " << vida1 << "vida: " << vida2 << endl;
		system("pause");// vai deixar o programa pausado ate que alguem aperte alguma tecla
		

		if (vida1 <= 0 || vida2 <= 0) // se a vida for menor ou igual a 0 vai sair..
		{
			sair = true; // comando buleano
		}
		else system("cls"); // se nao, limpa a tela 

		cout << "FIM DE JOGO!" << endl; // saida com fim de jogo 

		if (vida1 > 0) { // se a vida1 for menor que 0 
			cout << "jog1" << "venceu !" << endl; // se o jogado 1 tiver mais vida ele vence 
		}
		else if (vida1 > 0) cout << "jog2" << "venceu !" << endl; //se o jogado 2 tiver mais vida ele vence
		else cout << "Os dois perderam!" << endl; // se nenhum dos dois vencerem vai dar empate 
		system("pause");
	}
	return 0; // retorno e 0
}