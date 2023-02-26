#ifndef ORDENSCOMPRA_HPP
#define ORDENSCOMPRA_HPP

#include <bits/stdc++.h>
#include <list>
#include <string>
using namespace std;

#include"data.hpp"
#include"Produto.hpp"

class OrdensCompra{
    public:
        void adicionarOrdemCompra(Compra compra);
        Compra buscarcompra(int id);
        void atualizarOrdemCompra(Compra compra,int i,string endereco,Produto produto,data data);
        void excluirCompra(Compra compra);
    private:
        list<Compra> compra;
}

#endif