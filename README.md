# Simulador de Fila de Atendimento Bancário

Este projeto é um programa em C++ que simula o atendimento em um banco. Os clientes entram em uma fila para serem atendidos, e o programa permite gerenciar o fluxo de entrada e saída dessa fila, simulando o funcionamento básico de um sistema de atendimento.

## Funcionalidades

1. **Adicionar Clientes à Fila**:

   - Permite ao usuário adicionar novos clientes ao final da fila.

2. **Atender o Próximo Cliente**:

   - Remove o cliente que está na frente da fila e exibe uma mensagem informando que ele foi atendido.

3. **Exibir a Fila de Espera**:

   - Exibe todos os clientes atualmente na fila, mostrando a ordem de atendimento.

4. **Encerrar o Programa**:

   - Encerra a simulação do atendimento bancário.

## Como o Programa Funciona

O programa utiliza a estrutura de dados `queue` da biblioteca padrão do C++ para gerenciar a fila de clientes:

- **Inserção de Clientes**:

  - Os clientes são inseridos no final da fila, garantindo que os mais antigos sejam atendidos primeiro (FIFO - First In, First Out).

- **Atendimento de Clientes**:

  - O cliente na frente da fila é removido e seu nome é exibido como o próximo a ser atendido.

- **Exibição da Fila**:

  - Uma cópia da fila é usada para exibir os clientes sem alterar a fila original.

## Diferença entre Usar `std::queue` com e sem `std::`

No programa, o uso de `std::queue` é essencial para referenciar a estrutura de fila da biblioteca padrão do C++. Há duas formas principais de utilizá-la:

1. **Com **``** explicitamente**:

   - Exemplo: `std::queue<std::string> clientes;`
   - Neste caso, o prefixo `std::` é usado para indicar explicitamente que a estrutura pertence ao namespace padrão.

2. **Sem o prefixo **``** (usando **``**)**:

   - Exemplo: `queue<string> clientes;`
   - Aqui, o namespace padrão é incluído no escopo do programa com o comando `using namespace std;` (linha 10 no código). Isso elimina a necessidade de prefixar `std::` antes de cada uso de elementos da biblioteca padrão.

### Vantagens e Desvantagens

- Usar explicitamente `std::`:

  - **Vantagem**: Torna o código mais claro e reduz o risco de conflitos com outros namespaces.
  - **Desvantagem**: Requer mais digitação.

- Usar `using namespace std;`:

  - **Vantagem**: Reduz a verbosidade do código.
  - **Desvantagem**: Pode causar conflitos de nomes em programas mais complexos.

No projeto atual, decidiu-se utilizar `std::` de forma explícita em alguns casos para demonstrar a possibilidade de ambas as abordagens.

## Interface do Usuário

Ao executar o programa, o usuário verá o seguinte menu:

```
Bem-vindo ao simulador de filas do banco!

Escolha uma opcao:
1. Adicionar novo cliente a fila
2. Atender proximo cliente
3. Exibir fila de espera
4. Sair

Digite sua escolha:
```

O programa exibe opções claras para o gerenciamento da fila, permitindo uma navegação intuitiva.

## Como Executar

1. Compile o código com um compilador compatível com C++, como `g++`:
   ```bash
   g++ -o banco fila_banco.cpp
   ```
2. Execute o programa:
   ```bash
   ./banco
   ```

## Requisitos

- Compilador C++ com suporte para a biblioteca padrão.
- Sistema operacional com suporte para comandos de terminal (como Windows, Linux ou macOS).

## Estrutura do Projeto

- **fila\_banco.cpp**: Contém o código fonte do programa.
- **README.md**: Este arquivo explicativo.
- **banco.exe**: (Opcional) Executável do programa.

Com este projeto, podemos entender conceitos de estrutura de dados como filas e sua aplicação em sistemas do mundo real, como o atendimento bancário. Divirta-se explorando e aprimorando o código! Como desafio, experimente adicionar funcionalidades como atendimento prioritário ou estatísticas de tempo e envie suas melhorias para o e-mail [rogerioweel@gmail.com](mailto\:rogerioweel@gmail.com).

