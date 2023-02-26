#include "empresa.hpp"

#include <bits/stdc++.h>
using namespace std;

Empresa::Empresa(){}

string Empresa::perguntarNome() {
  string nome;
  cout << "Digite o nome da empresa: ";
  cin >> nome;
  return nome;
}