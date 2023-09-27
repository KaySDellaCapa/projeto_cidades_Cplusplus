#include "cidades.h"
#include <iostream>

using namespace std;

cidades::cidades(int a, int p) { // Função construtora
  ano = a;
  populacao = p;
}

void cidades::setano(int a) { ano = a; }

int cidades::getano() { return ano; }

void cidades::setpopulacao(int p) { populacao = p; }

int cidades::getpopulacao() { return populacao; }

void cidades::acrescentarpopulacao(int p) { populacao += p; }
