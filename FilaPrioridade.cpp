#include "FilaPrioridade.hpp"    
    
FilaPrioridade::FilaPrioridade()  {

    this->ultimo = this->cabeca = new No( 0, 0, nullptr );
    this->tamanho = 0;    
}


/** Essa função insere um elemento na lista de prioridades, a prioridade define a posição desse elemento
 * O nó com maior prioridade deve ser sempre o primeiro da lista, o de segunda maior prioridade o segundo ...
 * Maior prioridade significa menor inteiro (então um dado com atributo prioridade 1 vem antes de um dado com atributo prioridade 2)
 * O segundo parâmetro - dado - é a informação armazenada no nó.
 */
void FilaPrioridade::inserir(int prioridade, int dado)  {

    No* aux = this->cabeca;
    bool achou = false;


    // Pesquisa pela posicao do novo no
    while( aux->getProximo() != nullptr )  {

        aux = aux->getProximo();

        if( prioridade < aux->getPrioridade() )  {

            achou = true;
            break;
        }
    } 

    // Se encontar uma posicao, insere o novo no nela.
    // Senao, insere no final da fila
    if( achou )  {

        aux->setProximo( new No( aux->getPrioridade(), aux->getDado(), aux->getProximo() ) );      
        aux->setPrioridade( prioridade );
        aux->setDado( dado );
    
        ++(this->tamanho);

        if( aux == this->ultimo ) this->ultimo = aux->getProximo();

    } else {

        inserirNoFinal( prioridade, dado );
    }    
}


void FilaPrioridade::inserirNoFinal(int prioridade, int dado)  {

    this->ultimo->setProximo( new No( prioridade, dado, nullptr ) );
    this->ultimo = this->ultimo->getProximo();
    ++( this->tamanho );
}



/** Essa função remove o primeiro nó da lista (pois é o de maior prioridade (menor inteiro)), e retorna o valor do dado armazenado no nó.
   @retorna a prioridade do primeiro nó da lista.
 */
int FilaPrioridade::remover()  {

    if( this->tamanho > 0 )  {

        No* aux = this->cabeca;
    
        this->cabeca = this->cabeca->getProximo();
        delete( aux );
        --( this->tamanho );

        return( this->cabeca->getDado() );
    }    

    return(0);
}


/** Esse método indica se a lista está vazia.
   @retorna verdadeiro se a lista está vazia, e falso caso contrário.
 */
int FilaPrioridade::estaVazio()  {

    return( this->tamanho == 0 );
}


/** Informa o número de elementos da lista.
   @retorna um inteiro n, onde n é o número de nós da lista.
 */
unsigned FilaPrioridade::getTamanho()  {

    return( this->tamanho );
}


/** Retorna o dado do nó que está no meio da lista.
 * Se a lista possui 2*n ou 2*n + 1 elementos, então o elemento do meio é
 * o que está no índice n, assumindo que o primeiro índice é 0.
   @retorna o elemento do meio da lista.
 */
int FilaPrioridade::getMeio()  {

    if( this->tamanho > 0 )  {

        No* aux = this->cabeca;
        int meio = (this->tamanho / 2)+1;
    
     
        for( int i = 0;  i < meio;  ++i )  {
    
            aux = aux->getProximo();
        }
    
        return( aux->getDado() );
    }

    return( 0 );
}


/** Retorna o dado do nó do último elemento da lista (o nó com menor prioridade (maior inteiro)).
   @retorna o inteiro armazenado no último nó da lista.
 */
int FilaPrioridade::getUltimo()  {

    if( this->tamanho > 0 )  return( this->ultimo->getDado() );

    return( 0 );
}


/** Esse método insere um nó com o dado passado como parâmetro na primeira posição da fila.
 * Uma forma simples de furar a fila é criar um valor de prioridade maior do que a prioridade da cabeça da fila;
 */
void FilaPrioridade::furaFila(int dado)  {

    inserir( (this->cabeca->getProximo()->getPrioridade()) - 1, dado );
}


void FilaPrioridade::print()  {

    No* aux = this->cabeca;

    while( aux->getProximo() != nullptr )  {

        aux = aux->getProximo();
        cout << aux->getDado() << " ";
    }
}