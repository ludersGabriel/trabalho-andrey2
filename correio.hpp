#ifndef CORREIO_HPP
#define CORREIO_HPP

#include <bits/stdc++.h>
#include "funcionario.hpp"
using namespace std;

class Correio {
  public:
    Correio();
    void enviarPagamento(Funcionario func, float valor);
};

#endif