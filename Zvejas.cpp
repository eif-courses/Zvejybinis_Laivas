//
// Created by Marius on 11/15/2021.
//

#include "Zvejas.h"

  Zvejas::Zvejas(string var, int ika){
    vardas = var;
    ikainis = ika;
  }
int Zvejas::gautiIkaini(){
  return ikainis;
}
void Zvejas::keistiVarda(string var){
  vardas = var;
}

  void Zvejas::isplaukti_zvejoti(string vardas, int ikainis){
    cout << vardas << " isplauke zvejoti " << ", jo valandinis ikainis: " << ikainis << " eur" << endl;
  }
  void Zvejas::isplaukti_zvejoti(const Zvejas& zvejas){

    secret();
    cout << zvejas.vardas << " isplauke zvejoti " << ", jo valandinis ikainis: " << zvejas.ikainis << " eur" << endl;
  }

const string &Zvejas::GetVardas() const {
  return vardas;
}

void Zvejas::SetVardas(const string &vardas) {
  Zvejas::vardas = vardas;
}

void Zvejas::secret() {
  cout << "prisijungiama prie duomenu centro";
}


