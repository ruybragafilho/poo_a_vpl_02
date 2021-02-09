#include "FilaPrioridade.hpp"    
    
FilaPrioridade::FilaPrioridade()  {

    
}


/** Essa função insere um elemento na lista de prioridades, a prioridade define a posição desse elemento
 * O nó com maior prioridade deve ser sempre o primeiro da lista, o de segunda maior prioridade o segundo ...
 * Maior prioridade significa menor inteiro (então um dado com atributo prioridade 1 vem antes de um dado com atributo prioridade 2)
 * O segundo parâmetro - dado - é a informação armazenada no nó.
 */
void FilaPrioridade::inserir(int prioridade, int dado)  {}


/** Essa função remove o primeiro nó da lista (pois é o de maior prioridade (menor inteiro)), e retorna o valor do dado armazenado no nó.
   @retorna a prioridade do primeiro nó da lista.
 */
int FilaPrioridade::remover()  {}


/** Esse método indica se a lista está vazia.
   @retorna verdadeiro se a lista está vazia, e falso caso contrário.
 */
int FilaPrioridade::estaVazio()  {}


/** Informa o número de elementos da lista.
   @retorna um inteiro n, onde n é o número de nós da lista.
 */
unsigned FilaPrioridade::getTamanho()  {}


/** Retorna o dado do nó que está no meio da lista.
 * Se a lista possui 2*n ou 2*n + 1 elementos, então o elemento do meio é
 * o que está no índice n, assumindo que o primeiro índice é 0.
   @retorna o elemento do meio da lista.
 */
int FilaPrioridade::getMeio()  {}


/** Retorna o dado do nó do último elemento da lista (o nó com menor prioridade (maior inteiro)).
   @retorna o inteiro armazenado no último nó da lista.
 */
int FilaPrioridade::getUltimo()  {}


/** Esse método insere um nó com o dado passado como parâmetro na primeira posição da fila.
 * Uma forma simples de furar a fila é criar um valor de prioridade maior do que a prioridade da cabeça da fila;
 */
void FilaPrioridade::furaFila(int dado)  {}


void FilaPrioridade::print() {}