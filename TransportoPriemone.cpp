//
// Created by Marius on 11/15/2021.
//

#include "TransportoPriemone.h"

TransportoPriemone::TransportoPriemone(const string &pavadinimas) : pavadinimas(pavadinimas) {}

const string &TransportoPriemone::GetPavadinimas() const {
  return pavadinimas;
}

void TransportoPriemone::spausdinti() {
  cout << pavadinimas << endl;
}
