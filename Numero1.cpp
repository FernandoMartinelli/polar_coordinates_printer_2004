#include "circunferencia.h"
//#include <iostream>

#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include "paralela.h"
#include "Numero1.h"

using namespace std;
/// definicao das funcoes de Tempo
// Funcao para impressao da hora

void Numero1::imprime(int aTempo1, int aTempo2) // Retas1 e arcos2 podem ter tempos diferentes.
{
     Paralela Porta;
     Circunferencia circ;
     
    /*************************** RAIO ****************************/     
  
    cout << "STATUS: Numero1" << endl; 
    circ.imprimeReta(1, aTempo1, fonte);
    circ.imprimeRetaInclinada(4,aTempo2, fonte/3, 3);
    circ.imprimeRetaInclinada(1,aTempo2, fonte/3, 3);
    circ.imprimeReta(0, aTempo1, fonte);    
    circ.imprimeArco(1, aTempo2, (fonte/20));
   
   /**************************** GIRO *********************************/
   // menos significativo=pequeno
   // mais significativo=grande

   cout << "STATUS: Fim Numero1" << endl;    
      
   Porta.set_dado(0x00); //pra nao deixar os motores ligados
   Porta.set_status();
   
}
