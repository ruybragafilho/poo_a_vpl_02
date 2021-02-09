#include "No.hpp"

using namespace std;


No::No(int prioridade, int dado, No* proximo)  {

    this->_dado = dado;
    this->_prioridade = prioridade;
    this->_proximo = proximo;
}
    

/** Seta o próximo nó.
 */
void No::setProximo(No *next)  {

    this->_proximo = next;
}

    
/** Retorna o próximo nó.
 */
No* No::getProximo()  {

    return( this->_proximo );
}

	
/** Retorna o dado armazenado no nó. 
    @retorna um inteiro.
 */
int No::getDado()  {

    return( this->_dado );
}


/** Seta o valor do dado que será armazenado no nó. 
 */
void No::setDado(int dado)  {

    this->_dado = dado;
}

	
/** Retorna o valor da prioridade do nó. 
 */
int No::getPrioridade()  {

    return( this->_prioridade );
}


/** Seta o valor da prioridade do nó. 
 */
void No::setPrioridade(int prioridade)  {

    this->_prioridade = prioridade;
}
