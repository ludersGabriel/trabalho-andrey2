#ifndef FOLHADEPAGAMENTO_HPP
#define FOLHADEPAGAMENTO_HPP

#include <bits/stdc++.h>
#include <list>
#include <string>
#include <Relatorio.hpp>
#include <Funcionario.hpp>
using namespace std;

class FolhaDePagamento {
  public:
    FolhaDePagamento();
    float calcularPagamento(Funcionario func);
    Relatorio criarRelatorio(int tipo, string ini, string fim, list<Funcionario> funcs);
};

#endif