#ifndef COMPRA_HPP
#define COMPRA_HPP

#include <bits/stdc++.h>
#include <string>

#include"data.hpp"
#include"Produto.hpp"

using namespace std;

class Compra{
    private:
        int id;
        Produto produto;
        string endereco;
        data data;
}

#endif