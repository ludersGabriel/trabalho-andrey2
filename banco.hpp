#ifndef BANCO_HPP
#define BANCO_HPP

#include <bits/stdc++.h>
#include "funcionario.hpp"
using namespace std;

class Banco {
  public:
    Banco();
    void enviarPagamento(Funcionario func, float valor);
};

#endif