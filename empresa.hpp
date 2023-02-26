#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <bits/stdc++.h>
using namespace std;

class Empresa {
  public:
    Empresa();
    int selecionarCobrancas(int a);
    string perguntarCaminho();
    string perguntarNome();
    void manterInfo(int a);
    void erro();  
    void validar(string a, string b); 
    void criarRelatorioAdmin(int a, string dataIni, string dataFim);
    bool requisitarSalvamento();
};

#endif