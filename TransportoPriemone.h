//
// Created by Marius on 11/15/2021.
//

#ifndef ZVEJYBINIS_LAIVAS_TRANSPORTOPRIEMONE_H
#define ZVEJYBINIS_LAIVAS_TRANSPORTOPRIEMONE_H
#include <iostream>
using namespace std;

class TransportoPriemone {
private:
  string pavadinimas;
public:
  explicit TransportoPriemone(const string &pavadinimas);
  const string &GetPavadinimas() const;
  void spausdinti();
protected:
  virtual void judeti() = 0;

};


#endif //ZVEJYBINIS_LAIVAS_TRANSPORTOPRIEMONE_H
