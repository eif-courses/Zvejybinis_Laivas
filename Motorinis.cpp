//
// Created by Marius on 11/15/2021.
//

#include "Motorinis.h"
Motorinis::Motorinis(const string &pavadinimas) : Laivas(pavadinimas) {}

void Motorinis::judeti() {
  Laivas::judeti(); // Tevinės klasės metodas
  cout << "Motorinis laivas juda";
}
