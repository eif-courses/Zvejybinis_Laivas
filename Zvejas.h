//
// Created by Marius on 11/15/2021.
//

#ifndef ZVEJYBINIS_LAIVAS_ZVEJAS_H
#define ZVEJYBINIS_LAIVAS_ZVEJAS_H

#include <iostream>
using namespace std;

class Zvejas{
private:
  string vardas; // r =false, w = false
  int ikainis; // r = false, w = false
  void secret();
public:
  Zvejas(string var, int ika);

  const string &GetVardas() const;

  void SetVardas(const string &vardas);

  int gautiIkaini(); // ikainis = r = true
  void keistiVarda(string var); // vardas = w = true
  void isplaukti_zvejoti(string vardas, int ikainis);
  void isplaukti_zvejoti(const Zvejas& zvejas);
};

#endif //ZVEJYBINIS_LAIVAS_ZVEJAS_H
