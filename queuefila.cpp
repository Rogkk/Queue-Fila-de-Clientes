/* Implemente um programa que simule o atendimento em um banco, onde os clientes entram em uma fila para
serem atendidos. O programa deve permitir gerenciar o fluxo de entrada e saída da fila, simulando o funcionamento
básico de um sistema de atendimento.
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>

using namespace std;

void pushCliente(queue<string>& clientes);
void atenderCliente(std::queue<std::string>& clientes);
void exibirFila(queue<string> clientes);

int main() {
	
	bool loop = true;
	int escolha;
	std::queue<std::string> clientes;
	
	do {
		system("cls");
		cout << "Bem-vindo ao simulador de filas do banco!\n\nEscolha uma opcao:\n";
		cout << "1. Adicionar novo cliente a fila\n";
		cout << "2. Atender proximo cliente\n";
		cout << "3. Exibir fila de espera\n";
		cout << "4. Sair\n\n";
		cout << "Digite sua escolha: ";
		cin >> escolha;
		
		if(escolha == 1) {
			pushCliente(clientes);
			loop = true;
		} else if(escolha == 2) {
			if(!clientes.empty()) {
				atenderCliente(clientes);
			}
			loop = true;			
		} else if(escolha == 3) {
			exibirFila(clientes);
			loop = true;
		} else if(escolha == 4) {
			loop = false;
		} else {
			loop = true;
		}
	} while(loop);
	
	return 0;
}

void pushCliente(queue<string>& clientes) {
	string nome;
	system("cls");
	cout << "Adicionar cliente na fila\n";
	cout << "Digite o nome do cliente: ";
	cin >> nome;
	fflush(stdin); // quando usuario digita nome composto bugava o código, então limpa buffer e armazena só primeiro nome = gambiarra
	clientes.push(nome);
	cout << "\nCliente " << nome << " adicionado a fila\n";
	system("pause");
}

void atenderCliente(std::queue<std::string>& clientes) {
	string nome;
	system("cls");
	nome = clientes.front();
	clientes.pop();
	cout << "Cliente " << nome << " foi atendido!\n";
	system("pause");
}

void exibirFila(queue<string> clientes) {
	int i = 0;
	system("cls");
	cout << "Fila de Clientes:\n";
	while(!clientes.empty()){
		cout << ++i << ". " << clientes.front() << "\n";
		clientes.pop();
	}
	cout << "\n";
	system("pause");
}