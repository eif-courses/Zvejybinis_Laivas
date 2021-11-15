//
// Created by Marius on 11/15/2021.
//

#ifndef ZVEJYBINIS_LAIVAS_LAIVAS_H
#define ZVEJYBINIS_LAIVAS_LAIVAS_H
#include "TransportoPriemone.h"

class Laivas : public TransportoPriemone{
public:
  explicit Laivas(const string &pavadinimas);

protected:
  void judeti() override;
};


#endif //ZVEJYBINIS_LAIVAS_LAIVAS_H
