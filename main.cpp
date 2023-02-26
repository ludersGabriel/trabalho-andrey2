#include <bits/stdc++.h>
#include "single_include/nlohmann/json.hpp"
#include "empresa.hpp"

using json = nlohmann::json;
using namespace std;


int main() {

  ifstream i("teste.json");

  json j = json::parse(i);

  Empresa* empresa = new Empresa();

  string nome = empresa->perguntarNome();

  j["nome"] = nome;

  cout << j << endl;

  return 0;
}
