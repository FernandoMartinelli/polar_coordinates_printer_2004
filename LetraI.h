// Inclusoes
#include "circunferencia.h"
#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include "paralela.h"
using namespace std;

class LetraI
{
 public: // definindo permissao publica para acesso a membros e funcoes
  int fonte;
  
  // Construtor com valores default igual a zero (inline)
  LetraI(int afonte)
  { 
    fonte = afonte;
    cout << "construtor!" << endl;
  }
  
  ~LetraI()
  {
    cout << "destrutor!" << endl;
  }
  // Funcao para impressao no PLOTTER 
  void imprime(int aTempo1, int aTempo2);

}; // fim da declaracao da classe

