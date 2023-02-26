#ifndef PONTO_HPP
#define PONTO_HPP

#include <bits/stdc++.h>
using namespace std;

class Ponto {
  public:
    Ponto();
    int inicio;
    int fim;
    void inserirHoras(Ponto ponto);
    void reconhecer();
    void enviarCartao();
    void validaCartao();
    void setStatus(Ponto ponto, bool env);
    void alterarHoras(int cobr, int horas, int ini, int fim, Ponto ponto);
    void inserirNovaHora(bool cancelar, int horas, Ponto ponto);
};

#endif