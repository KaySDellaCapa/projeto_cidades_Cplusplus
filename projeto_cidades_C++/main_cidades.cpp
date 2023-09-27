// ESCREVER NO SHELL:
// g++ main_cidadesbrasil.cpp cidadesbrasil.cpp -o cidadesbrasil.exe

#include "cidades.h"
#include <iostream>

using namespace std;

int main() {
  cidades campinas(1774, 1214000);
  cout << "Campinas:\n";
  cout << "Ano de fundação: " << campinas.getano() << endl;
  cout << "População de: " << campinas.getpopulacao() << endl;

  cidades aracatuba(1908, 198129);
  cout << "Aracatuba:\n";
  cout << "Ano de fundação: " << aracatuba.getano() << endl;
  cout << "População de: " << aracatuba.getpopulacao() << endl;

  return 0;
}