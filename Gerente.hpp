#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <bits/stdc++.h>
#include <Relatorio.hpp>
#include <Funcionario.hpp>
using namespace std;

class Gerente {
  public:
    Gerente();
    Relatorio criarRelatorio(int tipo, string ini, string fim, list<Funcionario> funcs);
};

#endif
