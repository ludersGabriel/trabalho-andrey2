#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <bits/stdc++.h>
#include "ponto.hpp"
using namespace std;

// vai ser um enum?
enum tipo {
    gerente
};

class Funcionario {
  public:
    Funcionario();
    string nome;
    tipo tipo;
    int totalHoras;
    int getTotalHoras(int ini, int fim);
    int getTotalHorasProjetos(int ini, int fim, int cobr);
    int getTotalHorasLicenca(int ini, int fim);
    string lerEndereco();
    string lerProduto();
    string lerData();
    int gerarId();
    void erro();
    void confirmarExclusao();
    void realizarLogin();
    void inserirHorasTrabalhadas(Ponto ponto);
    void salvarCartao(int cobr, int horas, int ini, int fim, Ponto ponto);
};

#endif