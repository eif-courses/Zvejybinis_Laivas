//
// Created by Marius on 11/15/2021.
//

#ifndef ZVEJYBINIS_LAIVAS_MOTORINIS_H
#define ZVEJYBINIS_LAIVAS_MOTORINIS_H
#include "Laivas.h"

class Motorinis : public Laivas{
public:
  Motorinis(const string &pavadinimas);
  void judeti() override;
};


#endif //ZVEJYBINIS_LAIVAS_MOTORINIS_H
