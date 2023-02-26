#ifndef LISTADEFUNCIONARIO_HPP
#define LISTADEFUNCIONARIO_HPP

#include <bits/stdc++.h>
#include "funcionario.hpp"
using namespace std;

class ListaDeFuncionario {
  public:
    ListaDeFuncionario();
    list<Funcionario> buscarFuncionarios();
    void excluirFuncionario(Funcionario func);
    void adicionarFuncionario(Funcionario func);
};

#endif